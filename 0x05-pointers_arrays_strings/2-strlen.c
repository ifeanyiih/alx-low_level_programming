#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _strlen - returns the length of a string
* @s: a pointer to char
*
* Return: length of string
*/
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i))
		++i;

	return (i);
}
