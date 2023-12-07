#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <iterator>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::getline; using std::cerr;
using std::string; using std::end; using std::begin;
using std::vector;
using std::ifstream; using std::ofstream;
using std::ostringstream; using std::istringstream;

bool valid(const string &n);
string format(const string &n);
vector<struct PeopleInfo> &
getPeople(ifstream &in, vector<struct PeopleInfo> &p);

struct PeopleInfo
{
	string name;
	vector<string> phones;
};


/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main(int argc, char *argv[])
{
	vector<struct PeopleInfo> people;

	if (argc != 3)
		return (EXIT_FAILURE);
	ifstream input(*(argv + 1));
	ofstream output(*(argv + 2), ofstream::app);
	if (!input.good() || !input.good())
		return (EXIT_FAILURE);
	getPeople(input, people);

	for (const auto &entry : people)
	{
		ostringstream formated, badNums;
		for (const auto &nums : entry.phones)
		{
			if (!valid(nums))
				badNums << " " << nums;
			else
				formated << " " << format(nums);
		}
		
		if (badNums.str().empty())
			output << entry.name << " " << formated.str() << endl;
		else
			cerr << "Input Error: " << entry.name
				<< " invalid numbers(s) " << badNums.str()
				<< endl;

	}

	return (EXIT_SUCCESS);
}

bool valid(const string &n)
{
	if (n.size() == 9)
		return (true);
	return (false);
}

string format(const string &n)
{
	string temp ("+(" + n + ")");

	return (temp);
}

vector<struct PeopleInfo> &
getPeople(ifstream &in, vector<struct PeopleInfo> &p)
{
	string temp;
	while (getline(in, temp))
	{
		/* cout << "[DEBUG] " << temp << endl; */
		istringstream iss(temp);
		PeopleInfo ptemp;
		iss >> ptemp.name;
		while (iss >> temp)
			ptemp.phones.push_back(temp);
		p.push_back(ptemp);
	}
	/* cout << "[DEBUG] " << p.size() << endl; */

	return (p);
}
