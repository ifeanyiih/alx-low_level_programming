#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: substring
* Return: number of bytes in initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	i = count = 0;
	while (*(s + i) != ' ' && *(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				count += 1;
			}
			++j;
		}
		++i;
	}

	return (count);
}
