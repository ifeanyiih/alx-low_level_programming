#include "dog.h"
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
	unsigned int i;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		exit(98);
	i = 0;
	while ((*(dog->name + i) = *(name + i)) != '\0')
		;
	i = 0;
	while ((*((*dog).owner + i) = *(owner + i)) != '\0')
		;
	dog->age = age;
	return (dog);
}
