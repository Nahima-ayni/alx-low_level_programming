#include "main.h"

/**
 * _strncat - combine and specify numbers you want
 * @dest: destination
 * @src: source
 * @n: maximum limit of characters
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
        int h, f;

        f = 0;
        while (dest[f] != '\0')
        {
                f++;
        }

        h = 0;
        while (h < n && src[h] != '\0')
        {
                dest[f] = src[h];
                h++;
                f++;
        }

        dest[f] = '\0';

        return (dest);
}
