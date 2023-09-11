#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

/**
 * main
 *
 * Description:
 * Return:
 */
int main()
{
	string input_str;
	string str;

	str = "";
	while (getline(cin, input_str))
	{
		for (auto &ch : input_str)
		{
			if (!(ispunct(ch))) str += ch;
		}
		str += '\n';
	}
	cout << str << endl;

	return (0);
}
