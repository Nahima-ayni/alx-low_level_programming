#include "main.h"

/**
 * _memset - function
 * @s: pointer char
 * @b: constant b
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
