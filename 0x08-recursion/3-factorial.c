#include "main.h"

/**
 * factorial - returns the factorial of a n0.
 * @n: integer
 * Return: -1 to show error and 1 for success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n-1));
}

