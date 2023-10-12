#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - function
 * @n: const unsigned int
 * Return: always success
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x = 0;

	va_list sumargs;

	va_start(sumargs, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		x += va_arg(sumargs, unsigned int);
	}

	va_end(sumargs);
	return (x);
}
