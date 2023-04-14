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
	int left, right, jump, i;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	left = right = 0;
	while (right < (int) size && array[right] < value)
	{
		left = right;
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i < minimum(right, (int) size); ++i)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
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
