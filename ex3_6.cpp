#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/**
 * main
 *
 * Description:
 * Return:
 */
int main()
{
	string str("This is called the twitter treatment.");

	for (decltype(str.size()) i = 0; i < str.size(); i += 1)
	{
		auto &ch = str[i];
		if (isalnum(ch)) ch = 'X';
	}
	cout << str << endl;

	return (0);
}
