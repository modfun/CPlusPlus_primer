#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::vector;
using std::end; using std::begin;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int> first(10, 1);
	vector<int> second(10, 1);

	second[3] = 3;
	for (auto f_it = first.begin(), s_it = second.begin(); f_it != first.end() && s_it != second.end();)
	{
		if (*f_it == *s_it) cout << "1 ";
		else cout << "0 ";
		f_it += 1; s_it += 1;
	}
	cout << endl;

	return (0);
}
