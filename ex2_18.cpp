#include <stdio.h>
#include <iostream>

/**
 * main - entry point
 *
 * Description: the main function.
 * Return: (0) on success.
 */
int main() {
	int *someptr;
	int i = 32;
	someptr = &i;
	*someptr = 64;
	int &ref = 9;
	printf("%i\n", i);
	std::cout << ref << std::endl;
	return (0);
}
