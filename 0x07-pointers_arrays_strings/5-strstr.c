#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring.
* @haystack: The string to search
* @needle: The string to locate
* Return: pointer to beginning of the located
* substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	void *ptr;

	i = 0;
	j = 0;
	ptr = haystack;
	while (*(haystack + i) && *(needle + j))
	{
		if (*(needle + j) == *(haystack + i))
		{
			++j;
		}
		else
		{
			j = 0;
			ptr = (haystack + i + 1);
		}
		++i;
	}

	if (*(needle + j) == '\0')
		return (ptr);
	else
		return (NULL);
}
