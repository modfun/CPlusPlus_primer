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
	vector<int> seq;
	int num;

	while (cin >> num)
	{
		seq.push_back(num);
	}
	for (auto n : seq)
	{
		cout << n << " ";
	}
	cout << "\b." << endl;

	return (0);
}
