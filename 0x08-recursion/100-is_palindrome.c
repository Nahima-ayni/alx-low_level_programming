#include "main.h"

/**
 * is_palindrome - string is a palindrome
 * @s: char
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_length(s + 1));
}

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
	int length = str_length(s);

	if (length <= 1)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, length - 1));
}
