#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: integer
 * @s2: integer
 * y: loop counter
 * Return: flag
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y] != '\0' && s2[y] != '\0'; y++)
	{
		if (s1[y] != s2[y])
		{
			return(s1[y] - s2[y]);
			y++;
		}
	}
	return (0);
}
