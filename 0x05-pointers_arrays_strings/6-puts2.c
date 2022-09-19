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
	unsigned int i, j;

	i = 0;
	j = 0;
	while (*(str + i))
		++i;
	while (*(str + j) && j < i)
	{
		_putchar(*(str + j));
		j += 2;
	}
	_putchar('\n');
}
