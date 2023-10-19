#include <iostream>
#include <string>
#include <cstdlib>
#include "ex7_6.h"

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
	if (read(cin, total))
	{
		sd_t trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else 
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else
	{
		std::cerr << "no data!" << endl;
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
