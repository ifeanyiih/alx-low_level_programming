#include "dog.h"
#include <stdlib.h>
#include <ctype.h>

/**
* init_dog - initializes a dog object
* @d: pointer to dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	unsigned int i;

	if (!d)
		exit(98);
	for (i = 0; ; ++i)
	{
		if (*(name + i) == '\0')
			break;
		if (!isalpha(*(name + i)))
			exit(98);
	}
	for (i = 0; ; ++i)
	{
		if (*(owner + i) == '\0')
			break;
		if (!isalpha(*(owner + i)))
			exit(98);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
