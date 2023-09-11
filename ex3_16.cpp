#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::string;
using std::vector;

/**
 * printivec - print a vector<int>
 * @vec: a vector<int>
 *
 * Description: print a vector<int> type.
 * Return: its size.
 */
int printivec(vector<int> vec)
{
	int size (0);

	if (vec.empty())
	{
		cout << "()\n";
		return (0);
	}
	cout << "(";
	for (auto n : vec)
	{
		cout << n << ", ";
		size += 1;
	}
	cout << "\b\b)" << endl;

	return (size);
}

/**
 * printsvec - print a vector<string>
 * @vec: a vector<string>
 *
 * Description: print a vector<string> type.
 * Return: its size.
 */
int printsvec(vector<string> vec)
{
	unsigned int size;

	if (vec.empty())
	{
		cout << "\"\"\n";
		return (0);
	}
	cout << "\"";
	size = 0;
	for (auto ch : vec)
	{
		size += 1;
		if (!(ch.empty()) && (size != vec.size()))
			cout << ch << " ";
		else
			cout << ch;
	}
	cout << "\"" << endl;

	return (size);
}

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int> v1;         // size:0,  no values.
	vector<int> v2(10);     // size:10, value:0
	vector<int> v3(10, 42); // size:10, value:42
	vector<int> v4{ 10 };     // size:1,  value:10
	vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
	vector<string> v6{ 10 };  // size:10, value:""
	vector<string> v7{ 10, "hi" };  // size:10, value:"hi"
	
	cout << printivec(v1) << " elements" << endl;
	cout << printivec(v2) << " elements" << endl;
	cout << printivec(v3) << " elements" << endl;
	cout << printivec(v4) << " elements" << endl;
	cout << printivec(v5) << " elements" << endl;
	cout << printsvec(v6) << " elements" << endl;
	cout << printsvec(v7) << " elements" << endl;
	return (0);
}
