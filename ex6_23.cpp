#include <iostream>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::end; using std::begin;

/**
 * print - print two integers
 *
 * Description: print two integers to console
 */
void print(const int * it, const int *const last)
{
	cout << "[]";
	for (; it != last; it++)
		cout << ", " << *it;
	cout << endl;
}
void print(const int *const p, size_t s)
{
	cout << "[]";
	for (unsigned i = 0; i < s; i++)
		cout << ", " << *(p + i);
	cout << endl;
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int i = 0, j[2] = {0, 1};

	print(begin(j), end(j));
	print(&i, (&i) + 1);

	print(j, 2);
	print(&i, 1);

	return (0);
}
