#include <iostream>
#include <vector>
#include <cstdlib>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::vector;

int fn(int, int);

int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int quo(int a, int b)
{
	return ((b != 0)? a / b: 0);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int (*)(int, int)> vptrs{
		&add, &sub, &mul, &quo};

	for (auto &f : vptrs)
	{
		cout << (*f)(8, 4) << endl;
	}

	return (EXIT_SUCCESS);
}
