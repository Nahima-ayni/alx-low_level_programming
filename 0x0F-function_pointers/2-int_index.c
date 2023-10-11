#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function name
 * @array: integer
 * @size: integer
 * @cmp: function compare
 * Return: always success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

