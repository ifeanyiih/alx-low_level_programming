#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* _puts - prints a string and than a new line
* @str: a pointer to char
*/
void _puts(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		++i;
	}
	_putchar('\n');
}
