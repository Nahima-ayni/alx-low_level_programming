#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory of an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: always success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memArray;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memArray = malloc(nmemb * size);
	if (memArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		memArray[i] = 0;
	}

	return (memArray);
}
