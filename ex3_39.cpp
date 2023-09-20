#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

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
	string s1 = "Hello dear";
	string s2 = "hello sir";
	char ca1[] = "hello dear";
	char ca2[] = "hello sir";

	if (s1 < s2) cout << s1 << endl;
	else cout << s2 << endl;

	if (strcmp(ca1, ca2) < 0) cout << s1 << endl;
	else cout << s2 << endl;

	return (0);
}
