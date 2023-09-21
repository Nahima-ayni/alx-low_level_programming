#include "main.h"

/**
 * _strncat - combine and specify numbers you want
 * @dest: destination
 * @src: source
 * @n: maximum limit of characters
 * Return: *dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int h, f;

	for (; dest[f] != '\0'; f++)

	while (src[h] != '\0' && n > 0)
	{
		src++;
		*dest = *src;
		n--;
	}

	dest[f] = '\0';
	return (dest);
}
