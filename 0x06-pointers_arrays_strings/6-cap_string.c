#ifndef MAIN_H
	#define MAIN_H "main.h"
	#include MAIN_H
#endif

int check_punc(char);

/**
* cap_string - capitalizes all the words in a string
* @s: string
* Return: a pointer to the string
*/
char *cap_string(char *s)
{
	int i, IN, OUT, word_pos;

	i = 0;
	IN = 1;
	OUT = 2;
	word_pos = OUT;
	while (*(s + i))
	{
		if (check_punc(*(s + i)))
		{
			word_pos = OUT;
		}
		else if (word_pos == OUT)
		{
			word_pos = IN;
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) = *(s + i) - 32;
		}
		++i;
	}

	return (s);
}


/**
* check_punc - check if character is a puctuation mark
* @c: character to check;
* Return: 1 true, 0 false
*/
int check_punc(char c)
{
	if (c == ' ' ||
	    c == '\t' ||
	    c == '\n' ||
	    c == ',' ||
	    c == '.' ||
	    c == ';' ||
	    c == '!' ||
	    c == '?' ||
	    c == '"' ||
	    c == ':' ||
	    c == '(' ||
	    c == ')' ||
	    c == '{' ||
	    c == '}' ||
	    c == '[' ||
	    c == ']')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
