#include "main.h"
#include <stdlib.h>

/**
 * array_range - range from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: always succes
 */
int *array_range(int min, int max)
{
	int *rangeArray;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	rangeArray = malloc((max - min + 1) * sizeof(int));
	if (rangeArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		rangeArray[i] = min + i;
	}

	return (rangeArray);
}
