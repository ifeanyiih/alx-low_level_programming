#include <stdlib.h>
#include "main.h"

unsigned int len(char *s);

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
	char *p;
	int i, j;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	if (n >= len(s2))
		n = len(s2);

	p = calloc(sizeof(char) * (len(s1) + n + 1), sizeof(char));
	if (!p)
		return (NULL);

	i = 0;
	while ((*(p + i) = *(s1 + i)))
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
