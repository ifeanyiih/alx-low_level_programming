#include "main.h"

/**
* _abs - gets the absolute value of int
* @n: integer argument
*
* Return: Absolute value of int
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
