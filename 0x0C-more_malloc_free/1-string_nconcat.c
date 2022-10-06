#include <stdlib.h>
#include "main.h"

unsigned int len(char *);

/**
* string_nconcat - concatenates two strings
* @s1: string 1
* @s2: string2
* @n: number of bytes to concat
* Return: a pointer to a newly allocated space in memory
* which contains s1, followed by the first n bytes of s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, i, j;

	if (!s2)
		s2 = "";
	if (!s1)
		s1 = "";

	p = malloc(sizeof(char) * (len(s1) + n + 1));
	if (!p)
		return (NULL);

	i = 0;
	while ((*(p + i) = *(s1 + i)) != '\0')
		++i;
	j = 0;
	while (n > 0 && (*(p + i) = *(s2 + j)))
	{
		++i, ++j, --n;
	}
	return (p);
}


/**
* len - returns the length of a string
* @s: string argument
* Return: length
*/
unsigned int len(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		++i;
	return (i);
}
