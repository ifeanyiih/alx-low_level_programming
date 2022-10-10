#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	if (name == NULL)
		d->name = "(nil)";
	else
		d->name = name;
	d->age = age;
	if (owner == NULL)
		d->owner = "(nil)";
	else
		d->owner = owner;
}
