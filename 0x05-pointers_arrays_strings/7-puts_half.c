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
	if (!((i / 2) % 2 == 0))
	{
		i /= 2;
		while (*(str + i))
		{
			_putchar(*(str + i));
			++i;
		}
	}
	_putchar('\n');
}
