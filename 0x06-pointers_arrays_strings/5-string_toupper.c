#ifndef MAIN_H
	#define MAIN_H "main.h"
	#include MAIN_H
#endif

/**
* string_toupper - change all lowercase letters to
* uppercase
* @s: pointer to char
* Return: a pointer to the string
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;
		++i;
	}
	return (s);
}
