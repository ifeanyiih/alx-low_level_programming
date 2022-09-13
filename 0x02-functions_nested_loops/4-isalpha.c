#include "main.h"

/**
* _isalpha - checks for alphabets
* @c: character to be checked.
* Description: checks if a given character is
* an alphabetic character, whether lowercase or uppercase
*
* Return: 1 (Success), 0 otherwise (fail)
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
