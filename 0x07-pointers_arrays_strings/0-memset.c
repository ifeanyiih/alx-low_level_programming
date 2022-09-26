#include "main.h"

/**
* _memset - fills the first n bytes of the memory
* area pointed to by s with the constant byte b
* @s: memory area pointed to
* @b: constant byte
* @n: n count
* Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		++i;
	}
	return (s);
}
