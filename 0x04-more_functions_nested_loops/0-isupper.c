#include "main.h"

/**
 * main - check the uppercase.
 *
 * Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
