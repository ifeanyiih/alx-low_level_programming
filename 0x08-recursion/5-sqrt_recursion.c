#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a
* number
*
* @n: the number
* Return: the square root, or -1 if no natural square root
*/
int _sqrt_recursion(int n)
{
	int count, i, tmp;

	i = 1;
	count = 0;
	tmp = n;
	while (1)
	{
		if (tm > 0)
		{
			tmp -= i;
			count += 1;
			i += 2;
		}
		else
			break;
	}
	if (count * count == n)
		return (count);
	else
		return (-1);
}
