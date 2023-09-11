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
};
typedef struct sales_data sales_data_t;

void init_sales_data(struct sales_data *s, std::string No, unsigned int u, double r);
void print_sales_data(struct sales_data *s);
sales_data_t *new_sales_data(std::string, unsigned int u, double r);
void free_sales_data(sales_data_t *s);

#endif
