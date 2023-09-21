#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @p: pointer to string params
 *
 * Return: p
 */
char *rot13(char *p)
{
	int i;
	int j;

	char nahima[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char madey[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (p[i] == nahima[j])
			{
				p[i] = madey[j];
				break;
			}
		}
	}
	return (p);
}

