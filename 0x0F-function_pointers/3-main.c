#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	char operator = *argv[2];
	int num2 = atoi(argv[3]);

	int result;

	switch (operator)
	{
		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 - num2;
			break;

		case '*':
			result = num1 * num2;
			break;

		case '/':
			if (num2 == 0)
			{
				printf("Error\n");
				return (100);
			}
			result = num1 / num2;
			break;

		case '%':
			if (num2 == 0)
			{
				printf("Error\n");
				return (100);
			}
			result = num1 % num2;
			break;

		default:
		printf("Error\n");
		return 99;
}
