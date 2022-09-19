#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _strcpy -  copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
*
* @dest: destination to copy to.
* @src: source to copy from
*
* Return: a pointer to char
*/
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while ((*(dest + i) = *(src + i)) != '\0')
		++i;
	return (dest);
}
