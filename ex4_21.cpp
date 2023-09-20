#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::vector;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int> vecNums (10, 1);

	vecNums[3] = 5;
	for (auto &v : vecNums) (v % 2) != 0 ? (v *= 2) : v *= 1;
	for (const auto &v : vecNums) cout << v << " ";
	cout << endl;

	return (0);
}
