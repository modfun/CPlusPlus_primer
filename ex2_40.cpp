#include <stdlib.h>
#include <stddef.h>
#include <iostream>
#include "ex2_40.h"

/**
 * init_sales_data - initiate sales data
 * @s: a ptr to struct
 * @No: a std::string
 * @u: unsigned int
 * @r: double
 *
 * Description: init
 */
void init_sales_data(struct sales_data *s, std::string No, unsigned int u, double r)
{
	if (s != NULL)
	{
		s->bookNo = No;
		s->units = u;
		s->revenue = r;
	}
}

/**
 * print_sales_data - print
 * @s: a ptr
 *
 * Description: print
 */
void print_sales_data(struct sales_data *s)
{
	if (s != NULL)
	{
		std::cout << "No: " << s->bookNo << std::endl;
		printf("units: %d book(s), revenue: $%0.2f .\n",
				s->units, s->revenue);
	}
}

/**
 * new_sales_data - kkkddd
 * @1
 * @2
 * @3
 *
 * Description: adfasdf
 * Return: ptr
 */
sales_data_t *new_sales_data(std::string No, unsigned int u, double r)
{
	sales_data_t *p;

	p = (sales_data_t *)malloc(sizeof(sales_data_t));
	if (p == NULL)
		return (NULL);
	p->bookNo = No;
	p->units = u;
	p->revenue = r;
	
	return (p);
}

/**
 * free_sales_data - adfasd
 * @1:
 *
 * Description:
 */
void free_sales_data(struct sales_data *s)
{
	if (s != NULL)
		free(s);
}
