#ifndef DOG_H
#define DOG_H


/**
* struct dog - identifies a dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif
