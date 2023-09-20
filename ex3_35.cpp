#include <iostream>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::begin; using std::end;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int nums[] = {1, 2, 3, 4, 5, 5};

	for (int *e = begin(nums); e != end(nums); e += 1)
	{
		*e = 0;
	}
	for (auto e : nums) cout << e << " ";
	cout << endl;

	return (0);
}
