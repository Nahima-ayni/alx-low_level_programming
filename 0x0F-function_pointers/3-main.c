#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int result = 0;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = *argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(operator);

	if (op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);
}
