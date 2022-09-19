#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* puts_half - prints half of a string, followed by a newline
* @str: pointer to char
*/
void puts_half(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i))
		++i;
	i /= 2;
	if (!(i % 2 == 0))
	{
		while (*(str + i))
		{
			_putchar(*(str + i));
			++i;
		}
	}
	else
	{
		while (*(str + ++i))
			_putchar(*(str + i));

	}
	_putchar('\n');
}
