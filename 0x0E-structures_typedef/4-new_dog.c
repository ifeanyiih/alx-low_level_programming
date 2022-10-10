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

	dog = malloc(sizeof(dog_t));
	if (!dog)
		exit(NULL);
	dog->name = name;
	dog->age = age;
	(*dog).owner = owner;
	return (dog);
}
