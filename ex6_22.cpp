#include <iostream>

using std::cout; using std::cin; using std::endl; using std::getline;

/**
 * swap - swap numbers
 *
 * Description: swap two integers.
 */
void swap(int *const i, int *const j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int k = 8, d = 9;
	int *i = &k, *j = &d;

	swap(i, j);
	cout << *i << " " << *j << endl;

	return (0);
}
