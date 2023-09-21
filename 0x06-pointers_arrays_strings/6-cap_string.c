#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @ptr: char
 *Return: The uppercase version of the input
*/
char *string_toupper(char *ptr)
{
        int z;

        for (z = 0; ptr[z] != '\0' ; z++)
        {
                if (ptr[z] >= 'a' && ptr[z] <= 'z')
                {
                        ptr[z] = ptr[z] - 32;
			ptr[z] = ptr
                }
        }
        return (ptr);
}
