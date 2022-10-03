#include "main.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int len(char *);

/**
* str_concat - concats two strings together
* @s1: string one
* @s2: string two
* Return: pointer to concat string,
* on failure, return NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	char *p;

	p = malloc(sizeof(char) * (len(s1) + len(s2)));
	if (p == NULL)
		return (NULL);
	i = 0;
	while ((*(p + i++) = *(s1++)) != '\0')
		;
	--i;
	while ((*(p + i++) = *(s2++)) != '\0')
		;
	return (p);
}

/**
* len - returns the lenght of a string
* @s: string
* Return: length of string s
*/
unsigned int len(char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i))
		++i;
	return (i);
}
