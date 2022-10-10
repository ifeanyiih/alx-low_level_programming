#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initializes a dog object
* @d: pointer to dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		exit(98);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
