#include <iostream>

using std::cout; using std::cin; using std::endl; using std::getline;

/**
 * swap - two ints
 *
 * Description: swap
 */
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int i = 5, j = 4;
	swap(i, j);

	return (0);
}
