#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _atoi - convert a string to an integer
* @s: the string to convert
* Return: number, 0 otherwise.
*/
int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	number = 0;
	i = 0;
	sign = 1;
	while (!(*(s + i) >= '0' && *(s + i) <= '9') && *(s + i) != '\0')
	{
		if (*(s + i) == '-')
			sign *= -1;
		if (*(s + i) == '+')
			sign *= 1;
		++i;
	}

	if (*(s + i) == '\0')
		return (0);

	while (*(s + i) >= '0' && *(s + i) <= '9' && *(s + i))
	{
		number = number * 10 + (*(s + i) - '0');
		++i;
	}

	return (number * sign);
}
