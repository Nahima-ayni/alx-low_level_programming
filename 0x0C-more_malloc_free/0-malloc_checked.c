#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocating memory
 * @b: unsigned int
 * Return: always success
 */
void *malloc_checked(unsigned int b)
{
	int *new_pointer = malloc(b);

	if (new_pointer == NULL)
	{
		return (NULL);
		exit(98);
	}

	return (new_pointer);
	free(new_pointer);
}
