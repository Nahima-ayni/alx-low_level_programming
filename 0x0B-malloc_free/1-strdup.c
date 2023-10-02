#include "main.h"
#include <stdlib.h>

/**
 * _strdup - string duplicate
 * @str: string
 * Return: always success
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *) malloc((length + 1) * sizeof(char *));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[length] = '\0';
	return (duplicate);
}
