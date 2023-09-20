#include "main.h"

/**
  * _strcat - combine two strings
  * @src: source
  * @dest: destination
  * Return: return dest as success
*/
char *_strcat(char *dest, char *src)
{
	int m, n;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m + n] = src[n];
	}

	dest[m + n] = '\0';

	return (dest);
}
