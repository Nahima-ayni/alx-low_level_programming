#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: integer
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int t, temp;

	for (t = 0; t < n / 2; t++)
	{
		temp = a[t];
		a[t] = a[n - 1 - t];
		a[n - 1 - t] = temp;
	}
}
