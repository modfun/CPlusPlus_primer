#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <cstddef>
#include "Sales_data.h"

using std::cin; using std::cout; using std::cerr; using std::endl;
using std::getline;
using std::ifstream;
using std::string; using std::vector;

/**
 * main
 * argc:
 * argv:
 *
 * Description:
 * Return:
 */
int main(int argc, char **argv)
{
	ifstream input(*(argv + 1));
	int i = argc;
	argc = i;

	sd_t total;
	if (read(input, total))
	{
		sd_t trans;
		while (read(input, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout , total);
	}
	else
	{
		cerr << "No data!" << endl;
	}

	return (EXIT_SUCCESS);
}
