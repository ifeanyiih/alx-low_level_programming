#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* print_rev - prints a string in reverse
* @s: a pointer to char
*/
void print_rev(char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i))
		++i;
	while (i--)
		_putchar(*(s + i));
	_putchar('\n');
}
