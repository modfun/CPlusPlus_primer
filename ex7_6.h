#ifndef SALES_DATA
#define SALES_DATA

#include <string>
#include <iostream>

typedef struct sales_data sd_t;
/**
 * struct sales_data - selling class
 * @booNo: ISBN Number for the book.
 * @units: units that have been sold.
 * @revenue: the total amount of profits.
 * Description: a class for the data of books sold. */
struct sales_data
{
	std::string bookNo;
	unsigned int units;
	double revenue;

	std::string isbn() const { return bookNo;}
	sd_t &combine(const sd_t &d);
};

sd_t &sales_data::combine(const sd_t &d)
{
	units += d.units;
	revenue += d.revenue;

	return (*this);
}

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

#endif
