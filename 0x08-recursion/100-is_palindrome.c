#include "main.h"

/**
 * is_palindrome - string is a palindrome
 * @s: char
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (0);
	}

	if (
