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
		return (NULL);
	dog->age = age;

	i = 0;
	while (*(name + i))
		++i;
	dog->name = malloc(sizeof(char) * ++i);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while ((*(dog->name + i) = *(name + i)) != '\0')
		++i;

	i = 0;
	while (*(owner + i))
		++i;
	dog->owner = malloc(sizeof(char) * ++i);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while ((*(dog->owner + i) = *(owner + i)) != '\0')
		++i;
	return (dog);
}
