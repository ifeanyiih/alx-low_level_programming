#include <stdio.h>
#include <math.h>

int minimum(int, int);

/**
* jump_search - a function that searches for a value in a sorted
* array of integers using the jump search algorithm
* @array: a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: The first index where value is found or -1
*/
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	int jump = sqrt(size);
	int left = 0;
	int right = jump;

	while (right < size && array[right] < value)
	{
		printf("Comparing value %d at index %d\n", array[right], right);
		left = right;
		right += jump;
	}

	for (int i = left; i < right && i < size; i++)
	{
		printf("Comparing value %d at index %d\n", array[i], i);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

/**
* minimum - a function that returns the minimum of two numbers
* @a: first number
* @b: second number
* Return: the minimum
*/
int minimum(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
	return (a);
}
