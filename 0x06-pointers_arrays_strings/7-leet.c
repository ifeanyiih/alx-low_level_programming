#ifndef MAIN_H
	#define MAIN_H "main.h"
	#include MAIN_H
#endif
#include <stdio.h>

/**
* leet - encodes a string into 1337
* @s: string to encode
* Return: a pointer to string
*/
char *leet(char *s)
{
	unsigned int i, j;
	char test[9] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't', '\0'};

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (j < 9)
		{
			if (*(s + i) == (test[j] - 32) || *(s + i) == test[j])
			{
				*(s + i) = 48 + j;
				break;
			}
			++j;
		}
		++i;
	}
	return (s);
}
