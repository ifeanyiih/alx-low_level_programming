#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* main - program entry point
* @argc: integer argument
* @argv: array of strings
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int (*fun)(int a, int b);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	printf("%d\n", fun(atoi(argv[1]), atoi(argv[argc - 1])));
	return (0);
}
