#include "main.h"

/**
 * print_most_numbers - print numbers to 9 except 2 and 4
 * Declarations: _putchar to print numbers and a nweline
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)

		{
		_putchar(a + '0');
		}
	}
		_putchar('\n');
}
