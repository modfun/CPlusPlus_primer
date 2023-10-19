#ifndef SALES_DATA
#define SALES_DATA

#include <string>

/**
 * struct sales_data - selling class
 * @booNo: ISBN Number for the book.
 * @units: units that have been sold.
 * @revenue: the total amount of profits.
 *
 * Description: a class for the data of books sold.
 */
struct sales_data
{
	std::string bookNo;
	unsigned int units;
	double revenue;

	std::string isbn() const { return bookNo;}
	sd_t &combine(const sd_t &);
};
typedef struct sales_data sd_t;

sd_t &combine(const sd_t &d) {
	units += d.units;
	revenue += d.revenue;

	return (*this);
}

#endif
