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
	for (unsigned int i = 0; i < numbers.size() - 1; ++i)
	{
		cout << numbers[i] + numbers[i+1];
		cout << ", ";
	}
	cout << "\b\b." << endl;

	for (unsigned int i = 0; i < ((numbers.size()-1)/2); ++i)
	{
		cout << numbers[i] + numbers[numbers.size()-i-1];
		cout << ", ";
	}
	if (numbers.size()%2 != 0)
		cout << numbers[numbers.size()/2 + 1] << "." << endl;
	else
		cout << "\b\b." << endl;

	return (0);
}
