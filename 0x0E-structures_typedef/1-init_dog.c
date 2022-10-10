#include "dog.h"
#include <stdlib.h>
#include <ctype.h>
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
	unsigned int i;

	if (!d)
		exit(98);
	i = 0;
	while (*(name + i))
	{
		if (!isalnum(*(name + i)))
		{
			printf("%s\n", "Error");
			exit(98);
		}
		++i;
	}
	i = 0;
	while (*(owner + i))
	{
		if (!isalnum(*(owner + i)))
		{
			printf("%s\n", "Error");
			exit(98);
		}
		++i;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
