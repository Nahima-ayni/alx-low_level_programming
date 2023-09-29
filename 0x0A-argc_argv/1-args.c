#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: integer
 * @argv: char
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
