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
	vector<string> input;
	string tempstr;
	unsigned int count;

	while (cin >> tempstr)
	{
		for (auto &ch : tempstr) ch = toupper(ch);
		input.push_back(tempstr);
	}
	count = 0;
	for (auto e : input)
	{
		cout << e << " ";
		if (count % 8 == 0)
			cout << endl;
		count += 1;
	}
	count -= 1;
	if (count % 8 != 0) cout << endl;

	return (0);
}
