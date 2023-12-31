#include "main.h"

/**
 * is_prime_helper - prime numbers
 * @n: integer
 * @divisor: modulo
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_helper(int n, int divisor)
{
		if (n <= 1)
		{
			return (0);
		}
		if (divisor == 1)
		{
			return (1);
		}
		if (n % divisor == 0)
		{
			return (0);
		}

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - prime numbers
 * @n: integers
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}
