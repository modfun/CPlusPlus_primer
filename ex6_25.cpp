#include <iostream>
#include <string>
#include <cctype>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::begin; using std::end;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main(int argc, char **argv)
{
	string s;
	string t;

	if (argc != 3) return (1);
	s = argv[1];
	t = argv[2];

	cout << s + t << endl;

	return (0);
}
