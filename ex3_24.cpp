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
	vector<int> numbers;
	int num;

	while (cin >> num)
	{
		numbers.push_back(num);
	}
	for (auto it_i = numbers.begin(); it_i != numbers.end() - 1; it_i += 1)
	{
		cout << *it_i + *(it_i + 1);
		cout << ", ";
	}
	cout << "\b\b." << endl;

	auto mid = numbers.begin() + (numbers.size() - 1) / 2;
	for (auto it_i = numbers.begin(); it_i <= mid; it_i += 1)
	{
		cout << *it_i + *(it_i + (numbers.size() - 1) / 2);
		cout << ", ";
	}
	if (numbers.size()%2 != 0)
		cout << numbers[numbers.size()/2 + 1] << "." << endl;
	else
		cout << "\b\b." << endl;

	return (0);
}
