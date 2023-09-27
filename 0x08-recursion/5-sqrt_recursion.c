#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_help(n, 1));
}

/**
 * _sqrt_help - function
 * @n: integer
 * @x: integer
 * Return: x + 1
 */

int _sqrt_help(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (_sqrt_help(n, x + 1));
}
