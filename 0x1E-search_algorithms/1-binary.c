#include <stdio.h>

int get_index(int *, int, int, int);

/**
* binary_search - a function that searches for a value
* in an array of integers using the Linear search algorithm
* @array: a pointer to the first element of the array to search
* @size: the number of elements in array
* @value: the value to search for
* Return: the index where the value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	return (get_index(array, 0, size - 1, value));
}

/**
* get_index - helper to the binary_search function
* @array: the array to search
* @startIndex: the beginning index of the array
* @endIndex: the last index of the array
* @value: the value to search for
* Return: the index where the value was found or -1
*/
int get_index(int *array, int startIndex, int endIndex, int value)
{
	int midIndex, i;

	if (startIndex > endIndex)
		return (-1);
	printf("%s", "Searching in array: ");
	for (i = startIndex; i <= endIndex; i++)
	{
		printf("%d", array[i]);
		if (i != endIndex)
			printf("%s", ", ");
	}
	printf("%c", '\n');

	midIndex = (startIndex + endIndex) / 2;
	if (array[midIndex] == value)
		return (midIndex);
	if (array[midIndex] > value)
		return (get_index(array, startIndex, midIndex - 1, value));
	else
		return (get_index(array, midIndex + 1, endIndex, value));
}
