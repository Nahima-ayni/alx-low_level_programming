#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - structure name
 * @d: pointer to the structure
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
	{
		return;
	}

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner)
	else
		printf("Owner: (nil)\n");
}
