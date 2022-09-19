#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* puts2 - prints every other character of a string,
* starting with the first character followed by a new line
*
* @str: pointer to char
*/
void puts2(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
