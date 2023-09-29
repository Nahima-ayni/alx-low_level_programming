#include "main.h"
/**
 * _strlen - string
 * @s: _strlen  integer
 * Return: (n);
*/
int _strlen(char *s)
{
        int n;

        for (n = 0; *s != '\0'; n++)
        s++;

        return (n);
}
