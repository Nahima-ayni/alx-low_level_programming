#ifndef dog_h
#define dog_h
/**
 * struct dog - structure
 * @age: float
 * @name: char
 * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
