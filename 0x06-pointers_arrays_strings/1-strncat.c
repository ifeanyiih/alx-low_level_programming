#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _strncat - contatenates two strings
* @dest: destination to concatenate to
* @src: source to concatenate from
* @n: number of bytes to conatenate.
*
* Description: _strncat concatenates two strings, using at
* most n bytes from src.
* Return: a pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i, j;
	int count;

	i = j = count = 0;
	while (*(dest + i))
		++i;
	while (count++ < n && (*(dest + i++) = *(src + j++)))
		;
	*(dest + i) = '\0';
	return (dest);
}
