#include <iostream>
#include <string>
#include <iterator>
#include "chapter6.h"

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::begin; using std::end;

/**
 * fact - Factorial function
 *
 * Description: Retrun the Factorial of an integer number.
 * Return: unsigned int upon success.
 */
unsigned fact(unsigned n)
{
	if (n < 2)
	{
		return (1);
	}
	else return (n * fact(n - 1));
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	unsigned i = fact(5);
	
	cout << i << endl;
	return (0);
}
