#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocating memory
 * @b: unsigned int
 * Return: always success
 */
void *malloc_checked(unsigned int b)
{
	void *new_pointer = malloc(b);

	if (new_pointer == NULL)
	{
		exit(98);
	}

	return (new_pointer);
}
