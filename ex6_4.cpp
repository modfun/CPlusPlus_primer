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
 * getfact - interact with user calculating factorials
 *
 * Description: Interact with user by giving the factorials of entered values.
 */
void getfact()
{
	unsigned i = 0;
	char c;

	do {
		cout << "Enter number to compute the Factorial" << endl;
		cin >> i;
		cout << i << "! = " << fact(i) << endl;
		cout << "Again? [y]" << endl;
		cin >> c;
	}
	while (c == 'y');
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	getfact();
	
	return (0);
}
