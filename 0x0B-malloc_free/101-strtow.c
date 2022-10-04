#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define IN 1
#define OUT 0

int words_length(char *s);

/**
* strtow - a function that splits a string into words
* @str: string
* Return: NULL if str=NULL or str="",
* otherwise a pointer to an array of strings(words)
*/
char **strtow(char *str)
{
	int size, i, j, wc;
	char **arr;

	if (!str || !*(str))
		return (NULL);
	size = words_length(str);
	if (!size)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (size + 1));
	if (!arr)
		return (NULL);

	i = 0, j = 0, wc = 0;
	while (*(str + i))
	{
		if (!(*(str + i) == ' '))
		{
			wc += 1;
		}
		else
		{
			if (wc > 0)
			{
				arr[j] = malloc(sizeof(char) * (wc + 1));
				if (!arr[j])
				{
					while (j)
						free(arr[j--]);
					free(arr);
					return (NULL);
				}
				++j;
			}
			wc = 0;
		}
		++i;
	}
	if (wc > 0)
	{
		arr[j] = malloc(sizeof(char) * (wc + 1));
		if (!arr[j])
		{
			while (j--)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		++j;
	}
	arr[j] = NULL;

	i = 0, j = 0, wc = 0;
	while (*(str + i))
	{
		if (!(*(str + i) == ' '))
		{
			*(arr[j] + wc) = *(str + i);
			wc += 1;
		}
		else
		{
			if (wc > 0)
			{
				*(arr[j] + wc) = '\0';
				++j;
				wc = 0;
			}
			wc = 0;
		}
		++i;
	}
	return (arr);
}


/**
* words_length - return the number of words in a string.
* @str: string
* Return: number of words in a string,
* NULL otherwise
*/
int words_length(char *str)
{
	int size, pos, i;

	size = 0;
	pos = OUT;
	i = 0;
	while (*(str + i))
	{
		if (pos == OUT && !(*(str + i) == ' ' || *(str + i) == '\t'))
		{
			pos = IN;
			size += 1;
		}
		if (pos == IN && (*(str + i) == ' ' || *(str + i) == '\t'))
			pos = OUT;
		++i;
	}
	return (size);
}
