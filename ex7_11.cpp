#include <iostream>
#include <cstdlib>
#include "sales_data.h"

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
	sd_t one;
	sd_t two ("33322");
	sd_t three ("99988", 12, 9);
	sd_t four (cin);

	print(cout, one);
	print(cout, two);
	print(cout, three);
	print(cout, four);

	return (EXIT_SUCCESS);
}
