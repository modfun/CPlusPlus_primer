#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iterator>
#include <vector>
#include <cstddef>

using std::cout; using std::cin; using std::cerr; using std::endl;
using std::getline;
using std::string; using std::vector;
using std::ifstream;
using std::istringstream;

/**
 * main
 * argc:
 * argv:
 *
 * Description:
 * Return:
 */
int main(int argc, char **argv)
{
	if (argc != 2) return (EXIT_FAILURE);
	ifstream ifs(*(argv + 1));
	vector<string> lines;
	string temp;

	while (getline(ifs, temp))
		lines.push_back(temp);
	for (const auto &e : lines)
	{
		istringstream iss(e);
		while(iss >> temp)
			cout << temp << endl;
	}
	
	return (EXIT_SUCCESS);
}
