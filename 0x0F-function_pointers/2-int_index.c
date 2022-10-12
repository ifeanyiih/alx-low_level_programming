#include "function_pointers.h"


/**
* int_index - searches for an integer
* @array: an array to search
* @size: size of the array
* @cmp: comparation function
* Return: -1 if no match, -1 if size <= 0,
* index of element otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		if (size <= 0)
			return (-1);
		if (!(*cmp)(array[i]))
			return (i);
		return (-1);
	}
}
