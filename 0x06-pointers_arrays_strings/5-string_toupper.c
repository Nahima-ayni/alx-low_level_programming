#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @ptr: char
 *Return: The uppercase version of the input
*/
char *string_toupper(char *ptr)
{
	int v;

	for (v = 0; ptr[v] != '\0' ; v++)
	{
		if (ptr[v] >= 'a' && ptr[v] <= 'z')
		{
			ptr[v] = ptr[v] + 32;
		}
	}
	return (ptr);
}
