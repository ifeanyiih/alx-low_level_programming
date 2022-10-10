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
	{
		printf("%s\n", "Error");
		exit(98);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
