#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - creates a new dog object
* @name: dog name
* @age: dog age
* @owner: dog owner name
*
* Description: create a dog object,
* using the given arguments
* Return: a pointer to struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cpy, *owner_cpy;
	unsigned int i;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		exit(98);
	i = 0;
	name_cpy = NULL;
	while ((*(name_cpy + i) = *(name + i)) != '\0')
		;
	i = 0;
	owner_cpy = NULL;
	while ((*(owner_cpy + i) = *(owner + i)) != '\0')
		;
	dog->name = name_cpy;
	dog->age = age;
	(*dog).owner = owner_cpy;
	return (dog);
}
