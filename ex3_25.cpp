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
		if (temp > 100) temp = 100;
		*(grades.begin() + temp / 10) += 1;
	}
	cout << "(";
	for (auto it_i = grades.begin(); it_i != grades.end(); it_i += 1)
		cout << *it_i << ", ";
	cout << "\b\b)\n";

	return (0);
}
