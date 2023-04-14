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
	int a, b, index, prev;

	a = 0;
	b = sqrt(size);
	index = minimum(b, (int) size) - 1;
	while (array[index] < value)
	{
		prev = a;
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b;
		b += sqrt(size);
		index = minimum(b, (int) size) - 1;
		if (a >= (int) size)
			return (-1);
	}

	if (a == 0)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		printf("Value between indexes [%d] and [%d]\n", a, b);
	}
	else
	{
		printf("Value between indexes [%d] and [%d]\n", prev, a);
		a = prev;
	}
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a += 1;
		if (a == minimum(b, size))
			return (-1);
	}

	
	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		return (a);
	}
	else
	{
		return (-1);
	}
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
