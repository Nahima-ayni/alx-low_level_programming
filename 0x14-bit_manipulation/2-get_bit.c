#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: unsigned int
 * Return: always succes
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num_bits)
	{
		return (-1);
	}

	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
