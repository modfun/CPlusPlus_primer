#include <stdio.h>
#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl; using std::getline;

/**
 * main - starting procedure
 *
 * Description: Entry Point.
 * Return: (0) success.
 */
int main()
{
	string s1;
	string s2;
	string s3;

	if (s1 == "\0") cout << "e\n";
	if (s1.empty()) cout << "ee\n";

	cin >> s2;
	cout << s2 << endl;

	while (cin >> s1)
	{
		cout << s1 << endl;
	}
	cout << endl;

	while (getline(cin, s3))
	{
		cout << s3 << endl;
	}

	return (0);
}
