#include "dog.h"
#include <stdio.h>

/**
 *  print_dog - structure name
 * @d: pointer to the structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "nill");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "nill");
	}
}

