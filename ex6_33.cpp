#include <iostream>
#include <vector>
#include <cstdlib>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::vector;

/**
 * printvec - print a vector
 *
 * Description: print recursively a vector.
 */
void printvec(const vector<int> &v)
{
	for (auto &e : v)
		cout << e << endl;
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int> vec {1, 3, 4, 5, 6};
	printvec(vec);

	return (EXIT_SUCCESS);
}
