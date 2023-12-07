#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstddef>

using std::cin; using std::cout; using std::cerr; using std::endl;
using std::string; using std::vector;
using std::ifstream;

/**
 * main -
 *
 * Description:
 * Return:
 */
int main(int argc, char **argv)
{
	vector<string> words;

	for (auto ptr = argv + 1; ptr != argv + argc; ++ptr)
	{
		string temp;
		ifstream input(*ptr);
		if (input)
		{
			while (input >> temp)
				words.push_back(temp);
		}
	}
	cout << words.size() << endl;

	return (EXIT_SUCCESS);
}
