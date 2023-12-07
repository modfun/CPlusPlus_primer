#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::cerr; using std::endl;
using std::fstream; using std::ifstream; using std::ofstream;
using std::string;
using std::vector;

/**
 * main
 *
 * Description:
 * Return:
 */
int main(int argc, char **argv)
{
	vector<string> lines;

	for (auto p = argv + 1; p != argv + argc; ++p)
	{
		ifstream in(*p);
		cout << "[Opening] " << *p << endl;
		string temp;
		if (in)
		{
			while (std::getline(in, temp))
				lines.push_back(temp);
			/* for (auto e : lines)
				cout << e << endl; */
		}
		else cerr << "[Falied] " << *p << endl;
	}
	cout << lines.size() << endl;

	return (EXIT_SUCCESS);
}
