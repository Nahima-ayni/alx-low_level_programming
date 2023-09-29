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
	if (argv != NULL && argv[0] != NULL)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
