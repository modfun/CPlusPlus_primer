#include <iostream>
#include <string>
#include <cstdlib>
#include "ex7_2.h"

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	sd_t total;
	if (cin >> total.bookNo >> total.units >> total.revenue)
	{
		sd_t trans;
		while (cin >> trans.bookNo >> total.units >> total.revenue)
		{
			if (total.isbn() == trans.isbn()) total.combine(trans);
			else total = trans;
		}
	}
	else std::cerr << "no data" << endl;

	return (EXIT_SUCCESS);
}
