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
	vector<int> vecNums {1, 2, 3, 4, 5, 6, 7, 8};
	int arrNums[8];

	for (auto it = begin(arrNums); it != end(arrNums); it += 1)
	{
		*it = vecNums[it - begin(arrNums)];
	}

	for (auto e : arrNums)
	{
		cout << e << " ";
	}
	cout << endl;

	return (0);
}
