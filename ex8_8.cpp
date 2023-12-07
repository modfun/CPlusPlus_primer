#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <cstddef>
#include "Sales_data.h"

using std::cin; using std::cout; using std::cerr; using std::endl;
using std::getline;
using std::ifstream; using std::ofstream;
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
	if (argc != 3) return (EXIT_FAILURE);
	ifstream input(*(argv + 1));
	ofstream output(*(argv + 2), ofstream::app);

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
				print(output, total);
				total = trans;
			}
		}
		print(output , total);
	}
	else
	{
		cerr << "No data!" << endl;
	}

	return (EXIT_SUCCESS);
}
