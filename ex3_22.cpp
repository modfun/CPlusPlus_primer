#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::vector;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<string> text = {
		"hello there, what's your name?",
		"i have nerver heard of such an incredble name!",
		"thank you for knowing you.", "", "sincerly"};

	for(auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		/* for (auto &ch : (*it)) ch = toupper(ch); */
		for (auto str_it = it->begin(); str_it != it->end(); ++str_it)
			*str_it = toupper(*str_it);
		cout << *it << endl;
	}
	return (0);
}
