#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::vector;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int> grades (10, 0);
	int temp;

	while (cin >> temp)
	{
		grades[temp/10] += 1;
	}
	cout << "(";
	for (auto n : grades) cout << n << ", ";
	cout << "\b\b)\n";

	return (0);
}
