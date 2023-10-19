#include <iostream>
#include <string>
#include <iterator>
#include <cstddef>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::begin; using std::end;

/**
 * seq - return a sequence
 *
 * Description: Gives a Sequence of how many ways called.
 * Return: number of calls size_t
 */
size_t seq(int n)
{
	static size_t count;

	count += n;
	return (count);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	for (int i = 0; i < 10; i++)
		cout << seq(i) << endl;

	return (0);
}
