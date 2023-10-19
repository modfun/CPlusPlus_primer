#include <iostream>
#include <cstdlib>

using std::cin; using std::cout; using std::endl; using std::getline;

typedef struct X X;
typedef struct Y Y;

/**
 * struct X
 * @
 *
 * Description:
 */
struct X
{
	Y *y;
};

/**
 * struct Y
 * @
 *
 * Description
 */
struct Y
{
	X x;
};

/**
 * main - starting point
 *
 * Description: The entry point
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main()
{
	return (EXIT_SUCCESS);
}
