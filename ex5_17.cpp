#include <iostream>
#include <vector>
#include <cstddef>

using std::cout; using std::cin; using std::endl; using std::getline;
using std::vector;

/**
 * main - Initial Procedure
 *
 * Description: The Entry point of the program.
 * Return: (0) success.
 */
int main()
{
	vector<int> numseq1 { 1, 2, 3, 4, 5, 6};
	vector<int> numseq2 { 12, 23, 345, 56, 7, 4};

	for (auto it1 = numseq1.begin(), it2 = numseq2.begin();
			it1 != numseq1.end() &&  it2 != numseq2.end(); it1++, it2++)
	{
		if (*it1 > *it2) return 1;
		else if (*it1 < *it2) return 2;

	}
	if (numseq1.size() > numseq2.size()) return 1;
	else if (numseq1.size() < numseq2.size()) return 2;

	return (0);
}
