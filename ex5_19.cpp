#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <iterator>
#include <cstddef>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::vector;
using std::begin; using std::end;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	string s1, s2;

	do
	{
		cout << "Enter two strings:\n";
		if (s1 > s2) cout << "First!\n";
		else if (s2 > s1) cout << "Second!\n";
	} while (getline(cin , s1) && getline(cin, s2));

	return (0);
}
