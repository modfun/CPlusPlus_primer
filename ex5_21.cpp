#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	string s ("");
	string p (s);
	bool states = false;

	while (cin >> s)
	{
		if (s == p) 
		{
			if (s[0] != '-')
			{
				p = s; continue;
			}
			states = true;
			break;
		}
		else p = s;
	}
	if (states) cout << s << endl;
	else cout << "No repeat!\n";

	return (0);
}
