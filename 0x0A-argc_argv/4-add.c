#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - string there are digit
 * @str: pointer to string
 *
 * Return: Always success
 */
int check_num(char *str)
{
	unsigned int flag;

	flag = 0;
	while (flag < strlen(str))

	{
		if (!isdigit(str[flag]))
		{
			return (0);
		}

		flag++;
	}

	return (1);
}

/**
 * main - print the name of a program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always Success
 */
int main(int argc, char *argv[])
{
	int flag;
	int str_to_int;
	int sum = 0;

	flag = 1;
	while (flag < argc)
	{
		if (check_num(argv[flag]))

		{
		str_to_int = atoi(argv[flag]);
		sum += str_to_int;
		}
		else

		{
			printf("Error\n");
			return (1);
		}

		flag++;
	}

	printf("%d\n", sum);

	return (0);
}















