#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees dogs
 *@d: poiter to the code
 */
void free_dog(dog_t *d)
{
	free(d);
}
