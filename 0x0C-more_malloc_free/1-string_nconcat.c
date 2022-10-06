#include <stdlib.h>
#include "main.h"
#include <stdio.h>

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

	if (n >= len(s2))
	{
		p = malloc(sizeof(char) * (len(s1) + len(s2) + 1));
		n = len(s2);
	}
	else
		p = malloc(sizeof(char) * (len(s1) + n + 1));
	if (!p)
		return (NULL);

	i = 0;
	while ((*(p + i) = *(s1 + i)) != '\0')
		++i;
	j = 0;
	while (n--)
	{
		*(p + i) = *(s2 + j);
		++i;
		++j;
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
	printf("len of %s = %d\n", s, i);
	return (i);
}
