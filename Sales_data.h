#ifndef SALES_DATA
#define SALES_DATA

#include <string>
#include <iostream>

typedef struct Sales_data sd_t;
std::istream &read(std::istream &in, sd_t &d);
std::ostream &print(std::ostream &out, const sd_t &d);
sd_t add(const sd_t &one, const sd_t &two);

/**
 * struct Sales_data - selling class
 * @booNo: ISBN Number for the book.
 * @units: units that have been sold.
 * @revenue: the total amount of profits.
 *
 * Description: a class for the data of books sold. */
struct Sales_data
{
	public:
	private:
		std::string bookNo;
		unsigned units;
		double revenue;

	public:
		std::string isbn() const
		{ 
			return bookNo;
		}
		sd_t &combine(const sd_t &d);

		/*
		 * constructors
		 */
		Sales_data() = default;
		Sales_data(const std::string &s):
			bookNo(s), units(0), revenue(0) {}
		Sales_data(const std::string &s, unsigned u, double p):
			bookNo(s), units(u), revenue(u*p) {}
		Sales_data(std::istream &in)
		{
			read(in, *this);
		}
	private:
		double avg_price() const
		{
			return (units? revenue / units: 0);
		}

	friend std::istream &read(std::istream &in, sd_t &d);
	friend std::ostream &print(std::ostream &out, const sd_t &d);
	friend sd_t add(const sd_t &one, const sd_t &two);
};

std::istream &read(std::istream &in, sd_t &d)
{
	double price = 0;
	in >> d.bookNo >> d.units >> price;
	d.revenue = d.units * price;
	return (in);
}

std::ostream &print(std::ostream &out, const sd_t &d)
{
	out << d.bookNo << " " << d.units << " " << d.revenue << "$";
	out << std::endl;
	return (out);
}

sd_t add(const sd_t &one, const sd_t &two)
{
	sd_t temp = one;
	temp.combine(two);
	return (temp);
}

/**
 * member functions
 */
sd_t &Sales_data::combine(const sd_t &d)
{
	units += d.units;
	revenue += d.revenue;

	return (*this);
}

#endif
