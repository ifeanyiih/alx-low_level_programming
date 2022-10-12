#include "function_pointers.h"

/**
* array_iterator - iterates an array
* @array: an array to iterate
* @size: size of the array
* @action: function to execute
*
* Description: executes a function on each
* element of an array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array == NULL || size <= 0 || action == NULL))
	{

		i = 0;
		while (i < size)
		{
			(*action)(array[i]);
			++i;
		}
	}
}
