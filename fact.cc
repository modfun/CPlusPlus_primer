#include "chapter6.h"


/**
 * fact - Factorial function
 *
 * Description: Retrun the Factorial of an integer number.
 * Return: unsigned int upon success.
 */
unsigned fact(unsigned n)
{
	if (n < 2)
	{
		return (1);
	}
	else return (n * fact(n - 1));
}

