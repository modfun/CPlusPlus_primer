#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <stdexcept>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::vector;
using std::domain_error;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int numOne = 0, numTwo = 0;

	cout << "Enter two numbers to divide:\n";
	while (cin >> numOne >> numTwo)
	{
		try
		{
			if (numTwo == 0)
				throw domain_error("Cannot divide by zero");
			cout << numOne / numTwo << endl;
		} catch (domain_error err)
		{
			cout << err.what() << endl;
			cout << "Try again and enter two numbers:\n";
			continue;
		}
	}

	return (0);
}
