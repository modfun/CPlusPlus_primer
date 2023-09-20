#include <iostream>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::end; using std::begin;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	constexpr size_t SIZE = 10;
	int first[SIZE] = {1, 1, 1, 1, 1, 6, 1, 1, 1, 1};
	int second[SIZE] = {1, 5, 1, 1, 1, 1, 1, 1, 1, 1};
	int *fp = first;
	int *sp = begin(second);

	for (unsigned i = 0; i < SIZE; i++)
	{
		if (*(fp + i) == *(sp + i))
			cout << 1 << " ";
		else cout << 0 << " ";
	}
	cout << endl;

	return (0);
}
