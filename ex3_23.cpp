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
	vector<int> numbers (10, 95);

	for (auto iter_i = numbers.begin(); iter_i != numbers.end(); ++iter_i)
		*iter_i = (*iter_i) * 2;
	for (auto e : numbers) cout << e << " ";
	cout << endl;
	return (0);
}
