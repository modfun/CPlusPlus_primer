#include <iostream>
#include <iterator>
#include <cstddef>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::begin; using std::end;

typedef int positive_integer;
typedef unsigned int negative_integer;
using pointer_to_integer = int *;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	const size_t SIZE = 16;
	int ia[SIZE] = {0};

	for (positive_integer i : ia)
		cout << i << " ";
	cout << endl;

	for (negative_integer i = 0; i < SIZE; i += 1)
		cout << ia[i] << " ";
	cout << endl;

	for (pointer_to_integer it = ia; it != end(ia); it += 1)
		cout << *it << " ";
	cout << endl;

	return (0);
}
