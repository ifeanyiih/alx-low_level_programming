#include "dog.h"

/**
* init_dog - initializes a dog object
* @d: pointer to dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
	free(name);
	free(owner);
}
