#include <iostream>
#include <sstream>
#include <string>
#include <cstddef>

using std::istream;
using std::cout; using std::cin; using std::endl;
using std::string;
using std::istringstream;

/**
 * fun
 */
istream &fun(istream &in)
{
	while (in.good())
	{
		string x;
		in >> x;
		cout << x << endl;
	}
	in.clear();
	return (in);
}

istringstream &fun(istringstream &in)
{
	while (in.good())
	{
		string x;
		in >> x;
		cout << x << endl;
	}
	in.clear();
	return (in);
}

/**
 * main
 * 
 * Description:
 * Return:
 */
int main()
{
	istringstream ss;
	string s = "his string is not onwc sssto";

	ss.str(s);
	fun(ss);

	fun(cin);

	cout << cin.rdstate() << endl;
	return (EXIT_SUCCESS);
}
