#include "main.h"
#include <stdlib.h>

/**
 * no_word - count the word
 * @s: char
 * Return: always success
 */
int no_word(char *s)
{
	int flag = 0;
	int count = 0;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
		{
			flag = 0;
		}

		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: pointer to a char
 * Return: always success
 */
char **strtow(char *str)
{
	int i, length = 0, k = 0, word, c, start, end;
	char **arrayWord, *tmp;

	while (*(str + length))
		length++;
	word = no_word(str);
	if (word == 0)
		return (NULL);
	arrayWord = (char **) malloc(sizeof(char *) * (word + 1));
	if (arrayWord == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == '\0' || str[i] == ' ')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc((c + 1) * sizeof(char));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				arrayWord[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}
	arrayWord[k] = NULL;
	return (arrayWord);
}
