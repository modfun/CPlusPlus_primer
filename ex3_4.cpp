#include <string>
#include <iostream>

using namespace std;

/**
 * main - init
 *
 * Description: entry.
 * Return: (0).
 */
int main ()
{
	string str1;
	string str2;

	getline(cin, str1);
	getline(cin, str2);

	if (str1.size() == str2.size()) cout << "Equal!" << endl;
	else if (str1.size() > str2.size()) cout << "First!" << endl;
	else cout << "Second!" << endl;

	return (0);
}
