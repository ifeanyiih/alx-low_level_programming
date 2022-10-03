#include <stdlib.h>
#include "main.h"

int len(char *);

/**
* argstostr - concatenates all the arguments of a program
* @ac: argument count
* @av: argument vector
* Return: pointer to concatenated string,
* Null if function fails
*/
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; ++i)
		size += len(av[i]);
	size += 1;

	s = malloc(sizeof(char) * size + ac);
	if (!s)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; ++i)
	{
		while ((*(s + j) = *(av[i]++)) != '\0')
			++j;
		*(s + j) = '\n';
		++j;
	}
	*(s + j) = '\0';
	return (s);
}

/**
* len - return the length of a string
* @s: a string
* Return: length of string;
*/
int len(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		++i;
	return (i);
}
