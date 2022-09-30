#include "main.h"
#include <stdio.h>

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 (Success), 1 (otherwise)
*/
int main(int argc, char *argv[])
{
	int d1, d2, i, j;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	d1 = 0, d2 = 0;
	i = 1;
	while (i < argc)
	{
		int sign, tmp;

		sign = 1, tmp = 0;
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
			{
				sign *= -1;
			}
			else
			{
				tmp = tmp * 10 + (argv[i][j] - '0');
			}
			++j;
		}
		tmp *= sign;
		if (d1 == 0)
			d1 = tmp;
		else
			d2 = tmp;
		++i;
	}
	printf("%d\n", d1 * d2);
	return (0);
}
