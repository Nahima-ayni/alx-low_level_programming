#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - structure name
 * @d: pointer to the structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)

		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)"
{
