#include <stdio.h>

/**
* main - add positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 (success), 1 (otherwise)
*/
int main(int argc, char *argv[])
{
	int i, j, tmp, sum;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	i = 1;
	sum = 0;
	while (i < argc)
	{
		j = 0, tmp = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				tmp = tmp * 10 + argv[i][j] - '0';
				++j;
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += tmp;
		++i;
	}

	printf("%d\n", sum);
	return (0);
}
