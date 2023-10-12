#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function name
 * @separator: constant char
 * @n: char unsigned int
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *next_s;
	va_list our_string;

	va_start(our_string, n);

	for (i = 0; i < n; i++)
	{
		next_s = va_arg(our_string, char *);
		if (next_s == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", next_s);
		}


		if (separator != NULL && *separator != '\0' && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(our_string);
}
