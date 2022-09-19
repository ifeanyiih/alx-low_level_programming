#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H

/**
* rev_string - reverse a string in place
* @s: pointer to char
*/
void rev_string(char *s)
{
	unsigned int i, j, limit;

	i = 0;
	j = 0;
	while (*(s + i))
		++i;

	limit = (i + j) / 2;
	while (j < limit && --i > limit)
	{
		char tmp;

		tmp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = tmp;
		++j;
	}
}
