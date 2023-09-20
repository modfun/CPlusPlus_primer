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
	char carr1[] = "hello sir";
	char carr2[] = "hello dear";
	char result[1024];

	strcpy(result, carr1);
	strcat(result, ", ");
	strcat(result, carr2);
	cout << result << endl;

	return (0);
}
