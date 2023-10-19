#include <iostream>
#include <string>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::begin; using std::end;

/**
 * abs - Absolute value |x|
 *
 * Description: returns the absolute value of given number.
 * Return: unsigned number.
 */
unsigned abs(long x)
{
	if (x < 0) return (-1 * x);
	return (x);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	unsigned i = abs(-234);
	
	cout << i << endl;
	return (0);
}
