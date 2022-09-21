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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
