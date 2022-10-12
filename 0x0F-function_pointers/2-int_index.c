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

	if (!(array == NULL || size <= 0 || cmp == NULL))
	{

		i = 0;
		while (i < size)
		{
			if (size <= 0)
				return (-1);
			if ((*cmp)(array[i]))
				return (i);
			++i;
		}
	}
	return (-1);
}
