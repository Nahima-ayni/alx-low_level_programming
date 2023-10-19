#include "lists.h"

/**
 * my_constructor - prints before main.
 *
 */
void construct(void) __attribute__((construct));

void construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
