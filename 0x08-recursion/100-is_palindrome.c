#include "main.h"

unsigned int len(char *s);
int test(char *, int, int);
/**
* is_palindrome - checks if a string is a palindrome
* @s: string
* Return: 1 if palindrom, 0 otherwise
*/
int is_palindrome(char *s)
{
	if (len(s) == 1)
		return (1);
	else
		return (test(s, 0, len(s) - 1));
}

/**
* len - finds the length of a string
* @s: the string
* Return: string length
*/
unsigned int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
* test - helper function for is_palindrome
* @s: string
* @st: start position
* @end: end position
* Return: 1 for pass, 0 otherwise.
*/
int test(char *s, int st, int end)
{
	int len_;

	len_ = len(s);
	if (st == len_ / 2)
		return (1);
	if (*(s + st) == *(s + end))
		return (test(s, ++st, --end));
	else
		return (0);
}
