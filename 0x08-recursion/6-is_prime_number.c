#include "main.h"

/**
 * is_prime_number - prime numbers
 * @n: integer
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
		return (1);

	return is_prime_number(n);
	i++;
}
