#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * main - entry point
 */
int main() {
	int i = 0;
	const int ci = 0;
	
	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;

	auto &n = i;
	auto *p2 = &ci;
	cout << k << l << m << p << n << p2 << endl;

	return (0);
}
