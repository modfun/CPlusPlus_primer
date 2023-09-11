#include <stdlib.h>
#include <iostream>
#include "ex2_40.h"

/**
 * main - entry
 * 
 * Return: zero
 */
int main()
{
	sales_data_t *record;

	record = new_sales_data("isbn-1234", 15, 23.45);
	print_sales_data(record);

	free_sales_data(record);
	return (0);
}
