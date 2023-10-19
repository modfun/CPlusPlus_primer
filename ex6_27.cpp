#include <iostream>
#include <initializer_list>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::initializer_list;

/**
 * sumlist - sum a list
 *
 * Description: sum all integers inside a parameter list.
 * Return: an integer.
 */
int sumlist(initializer_list<int> l)
{
	int sum = 0;
	for (auto it = l.begin(); it != l.end(); it++)
		sum += *it;
	return (sum);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	cout << sumlist({1, 3, 5, 6}) << endl;

	return (0);
}
