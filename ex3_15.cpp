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
	vector<string> strList;
	string tmp;

	while (getline(cin, tmp))
	{
		strList.push_back(tmp);
	}
	for (auto s : strList)
	{
		cout << s << endl;
	}

	return (0);
}
