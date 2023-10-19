#include <iostream>

using std::cout; using std::cin; using std::endl; using std::getline;

/**
 * bigger - return bigger numbers
 *
 * Description: compare two integers.
 * Return: an int
 */
int bigger(int i, const int *const p)
{
	if (i > *p) return (i);
	return (*p);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int i = 4, j = 6;
	int *k = &j;

	cout << bigger(i, k) << endl;

	return (0);
}
