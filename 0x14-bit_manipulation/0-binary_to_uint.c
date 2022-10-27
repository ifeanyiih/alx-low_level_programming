#include "main.h"

unsigned int pw(int num, int pow);

/**
* binary_to_uint - convert binary to unsigned int
* @b: pointer to string of 0 and 1 chars
* Return: converted number or 0, if
* there is one or more chars in the string b that is not
* 0 or 1, if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int rslt, i, count;

	if (b == NULL)
		return (0);
	i = 0;
	while (*(b + i))
	{
		if (!(*(b + i) == '1' || *(b + i) == '0'))
			return (0);
		++i;
	}
	rslt = 0;
	count = i;
	i = 0;
	while (*(b + i))
	{
		rslt += (*(b + i) - '0') * pw(2, --count);
		++i;
	}
	return (rslt);
}

/**
* pw - raise a number to a power
* @num: number
* @pow: power to raise to
* Return: the result of num raised to pow
*/
unsigned int pw(int num, int pow)
{
	if (pow == 0)
		return (1);
	return (num * pw(num, pow - 1));
}
