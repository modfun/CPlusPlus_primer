#include <iostream>

using std::cout; using std::cin; using std::endl; using std::getline;

/**
 * swap - swap two ints
 *
 * Description: swap function for two integers using pointers.
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int i, j;
	i = 9, j = 4;

	swap(i, j);

	return (0);
}
