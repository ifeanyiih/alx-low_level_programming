#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _strcmp - compare two strings
* @s1: string1
* @s2: string2
* Return: positive value if s1 > s2, negative value if
* s1 < s2, 0 if s1 == s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);
		++i;
	}
	return (*(s1 + i) - *(s2 + i));
}

