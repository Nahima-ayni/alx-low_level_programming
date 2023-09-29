#include "main.h"

/**
 * _strncpy - to copy from source to destinaton
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: _strncpy n
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }

        return (dest);
}
