#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function add
 * @a: integer
 * @b: integer
 * Return: always success
 */
int op_add(int a, int b)
{
	int sum;

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
	int difference;

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
	int product;

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
	int result;

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
	int remainder;

	remainder = a % b;
	return (remainder);
}
