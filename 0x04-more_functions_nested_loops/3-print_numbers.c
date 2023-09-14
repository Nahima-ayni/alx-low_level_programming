#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Description: _putchar to print number from 0 to 9 and then print a newline
*/
void print_numbers(void)
{
	int a;
	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}

		_putchar('\n');
}
