#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function name
 * @separator: constant char pointer
 * @n: constant unsigned int
 * Return: always success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int next_arg;
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		next_arg = va_arg(numbers, unsigned int);

		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}

	printf("%d", next_arg);
	}

	printf("\n");
	va_end(numbers);
}
