#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _strncpy - copy string from src to dest
* @dest: destination
* @src: source
* @n: number of characters
* Return: a pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (n-- && (*(dest + i) = *(src + i)))
		++i;
	*(dest + i) = '\0';
	return (dest);
}
