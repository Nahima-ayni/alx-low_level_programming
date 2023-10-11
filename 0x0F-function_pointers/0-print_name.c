#include "function_pointers.h"

/**
 * print_name - function name
 * @name: pointer
 * @f: function pointer
 * @s: char
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

void functionprint(char *s)
{
	int i;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(s[i]);
	}
}

