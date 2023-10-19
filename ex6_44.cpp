#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cassert>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;

inline const string &isShorter (const string &s1, const string &s2)
{
	return ((s1.size() > s2.size())? s1: s2);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	string str = "hello";

	cout << isShorter(str, "world");
	cout << endl;

	return (EXIT_SUCCESS);
}
