#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - prints a info
* @d: pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (!d)
		exit(98);
	if (!d->name)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);
	if (!d->age)
		printf("Age: %s\n", "(nil");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: %s\n", "(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
