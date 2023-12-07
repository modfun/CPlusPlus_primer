#include <iostream>
#include <string>
#include <cstddef>

using std::istream;
using std::cout; using std::cin; using std::endl;
using std::string;

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

/**
 * main
 * 
 * Description:
 * Return:
 */
int main()
{
	fun(cin);
	cout << cin.rdstate() << endl;
	return (EXIT_SUCCESS);
}
