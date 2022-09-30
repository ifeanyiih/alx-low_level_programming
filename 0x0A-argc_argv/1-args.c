#include "main.h"

#define Unused(x) (void)(x)

/**
* main - program prints number of arguments passed
* @argc: argument count
* @argv: argument vector
* Return: (0) success
*/
int main(int argc, char *argv[])
{
	_putchar(--argc + '0');
	_putchar('\n');
	Unused(argv);
	return (0);
}
