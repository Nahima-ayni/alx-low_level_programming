#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
	perror("Memory allocation failed");
	return NULL;
	}

    new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
	perror("Name duplication failed");
        free(new_dog);
	return NULL;
	}

	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
	perror("Owner duplication failed");
	free(new_dog->name);
	free(new_dog);
	return NULL;
	}

    new_dog->age = age;

	return new_dog;
}

int main()
{

	dog_t *my_dog = new_dog("Fido", 3.5, "Alice");

	if (my_dog != NULL)
	{
	printf("Created a dog named %s with owner %s and age %.1f\n", my_dog->name, my_dog->owner, my_dog->age);
        
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	}

	return 0;
}

