#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of  dog
 * Return: a pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	return (NULL);

	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;

	return (new_dog);
}
