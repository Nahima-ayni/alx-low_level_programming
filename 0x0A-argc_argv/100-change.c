#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints min no. of coins
 * @argc: argument count
 * @argv: vector count
 *
 * Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int num1, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	result = 0;

	if (num1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num1 >= 0; i++)
	{
		while (num1 >= coins[i])
		{
			result++;
			num1 = num1 - coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}

