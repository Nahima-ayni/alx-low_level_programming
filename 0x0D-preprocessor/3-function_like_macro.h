#include <stdio.h>
#ifndef function_like_macro
#define function_like_macro

int main(void);

#ifndef ABS
#define ABS(x) ((x) < 0 ? -(x) : (x))
#endif

/**
 * main - absolute value
 * Return: always success
 */

int main(void)
{

	int number = 98;

	printf("%d\n", ABS(number));
	return (0);
}
#endif
