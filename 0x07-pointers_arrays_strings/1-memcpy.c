#include "main.h"

/**
* _memcpy - copies n bytes from memory area src
* to memory area dest
* @src: source memory area
* @dest: destination memory area
* @n: n count
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
