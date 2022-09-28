#include "main.h"

/**
* _puts_recursion - prints a string recursively, followed
* by a newline
* @s: the string
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*(s++));
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
