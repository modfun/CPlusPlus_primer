#ifndef DATA_H
#define DATA_H

#include <stdlib.h>
#include <stddef.h>
#include <iostream>
#include <string>

/**
 * struct sales_data - sales data
 * @bookNo: a string
 * @units: a non-negative number
 * @revenue: the floating point price
 *
 * Description: a sales data structure.
 */
struct sales_data
{
	char *bookNo;
	unsigned int units;
	double revenue;
};
typedef struct sales_data sd_t;

#endif
