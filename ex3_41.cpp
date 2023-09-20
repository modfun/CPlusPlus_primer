#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::vector;
using std::begin; using std::end;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	int nums[] = {1, 2, 3, 45, 6, 6, 8};
	vector<int> vecNums (begin(nums), end(nums));

	for (auto e : vecNums)
	{
		cout << e << " ";
	}
	cout << endl;

	return (0);
}
