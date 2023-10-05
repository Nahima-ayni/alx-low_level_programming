#include "main.h"
#include <stdlib.h>

/**
 *_realloc - char to pointer
 * @ptr: pointer to the previously allocated memory block
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: always success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;
	unsigned int i;
	unsigned int min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_block = malloc(new_size);
		return (NULL);
		return (new_block);
	}

	if (new_size == old_size)
		return (ptr);

	new_block = malloc(new_size);
	if (new_block == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
	{
		((char *)new_block)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (new_block);
}

