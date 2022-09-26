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
	unsigned int count, sstr_count, i, j;
	void *ptr;

	i = count = sstr_count = 0;

	while (*(needle + i))
	{
		sstr_count += 1;
		++i;
	}

	i = 0;
	j = 0;
	ptr = haystack;
	while (*(haystack + i) && count != sstr_count - 1)
	{
		if (*(needle + j) == *(haystack + i))
		{
			count += 1;
			++j;
		}
		else
		{
			count = 0;
			j = 0;
			ptr = (haystack + i + 1);
		}
		++i;
	}

	if (count == sstr_count - 1)
		return (ptr);
	else
		return (NULL);
}
