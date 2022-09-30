#include <stdio.h>
#include <stdlib.h>

int change(int, int);

/**
* main - print the minimum number of coins to
* make change for an amount of money.
*
* @argc: integer argument
* @argv: argument vector
*
* Return: 1, if arguments not exactly 1,
* 0 otherwise.
*/
int main(int argc, char *argv[])
{
	int num, coins;

	coins = 0;
	num = atoi(argv[1]);
	if (argc > 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
		coins = change(num, 25);

	printf("%d\n", coins);
	return (0);
}



/**
* change - return number of coins
* @amt: amount of money
* @st: start coin
* Return: number of coins
*/
int change(int amt, int st)
{
	int result;

	result = amt / st;
	if (amt % st == 0)
		return (result);
	else if (st == 25)
		return (result += change(amt % st, 10));
	else if (st == 10)
		return (result += change(amt % st, 5));
	else if (st == 5)
		return (result += change(amt % st, 2));
	else
		return (result += change(amt % st, 1));
}
