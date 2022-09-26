#include "main.h"
#include <stdio.h>

/**
* _strchr - locate a character in a string
* @s: the string
* @c: the character
* Return: pointer to first occurence of character
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != c && *(s + i) != '\0')
		++i;
	if (*(s + i) == '\0')
		return (NULL);
	return (s + i);
}
