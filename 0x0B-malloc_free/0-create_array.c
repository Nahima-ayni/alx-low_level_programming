#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: an array of chars
 * @c: char
 * Return: always success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *r = (char *) malloc(size * sizeof(char));

	if  (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		r[i] = c;
	}

	return (r);
}
