#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _strcat - concatenates two strings
* @dest: the string to concatenate to
* @src: the string to concatenate from
* Return: a pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	unsigned int i, j;

	i = j = 0;
	while (*(dest + i))
		++i;
	while ((*(dest + i++) = *(src + j++)) != '\0')
		;

	return (dest);
}
