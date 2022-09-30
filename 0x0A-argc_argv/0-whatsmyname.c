#include "main.h"

#define Unused(x) (void) (x);

/**
* main - prints the name of this program file
* @argc: argument count
* @argv: argument vector
* Return: (0) success
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (*(*argv + i))
	{
		_putchar(*(*argv + i));
		++i;
	}
	_putchar('\n');
	Unused(argc);
	return (0);
}
