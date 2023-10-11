#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function add
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_add(int a, int b)
{
	sum = a + b;
	return (sum);
}

/**
 * op_sub - function sub
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_sub(int a, int b)
{
	difference = a - b;
	return (difference);

}

/**
 * op_mul - function mul
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_mul(int a, int b)
{
	product = a * b;
	return (product);
}

/**
 * op_div - function div
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}

/**
 * op_mod - function modulo
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	remainder = a % b;
	return (remainder);
}
