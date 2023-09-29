#include <stdio.h>
#include "main.h"

/**
 * main - prints a new mine
 * @argc: agrmunet count
 * @argv: argument vector
 * Return: always success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

