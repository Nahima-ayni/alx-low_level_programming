#include "main.h"

/**
 * _strncat - combine and specify numbers you want
 * @dest: destination
 * @src: source
 * @n: max no of char limit specified to combine
 * Return: *dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int f, h;

	for (f = 0; dest[f] != '\0'; f++)

	for (h = 0; src[h] != '\0' && n < 0; h++)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest);
}
