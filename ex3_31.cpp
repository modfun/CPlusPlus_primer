#include <iostream>
#include <vector>

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
	constexpr size_t SIZE = 10;
	int arrOfInts[SIZE];
	int copyArr[10];
	vector<int> vecOfInts (10);
	vector<int> copyVec (SIZE);
	int i;

	for (size_t i = 0; i < SIZE; i += 1)
	{
		arrOfInts[i] = i + 0;
	}
	i = 0;
	for (auto e : arrOfInts)
	{
		copyArr[i] = e;
		i += 1;
	}
	cout << &arrOfInts << endl;
	cout << copyArr[1] << endl;

	i = 0;
	for (auto it = vecOfInts.begin(); it != vecOfInts.end(); it += 1)
	{
		*it = i;
		i += 1;
	}
	i = 0;
	for (auto &n : copyVec)
	{
		n = vecOfInts[i];
		i += 1;
	}

	return (0);
}
