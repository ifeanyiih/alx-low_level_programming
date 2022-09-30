#include "main.h"

#define Unused(x) (void)(x)

/**
* main - program prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: (0) success.
*/
int main(int argc, char *argv[])
{
	int i, j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (*(argv[i] + j))
		{
			_putchar(*(argv[i] + j));
			++j;
		}
		_putchar('\n');
		++i;
	}
	return (0);
}
