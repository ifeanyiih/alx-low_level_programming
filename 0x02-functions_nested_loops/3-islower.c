#include "main.h"

/**
* _islower - checks for lowercase character
* @c: the character to be checked
*
* Description: function checks if argument is lowercase char
* Return: 1 if character is lower case (Success),
* 0 otherwise (failure)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
