#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - adds two numbers
* @a: integer argument
* @b: integer argument
* Return: sum of numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of two numbers
* @a: integer argument
* @b: integer argument
* Return: the difference of numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two numbers
* @a: integer argument
* @b: integer argument
* Return: product of two numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - result of division
* @a: integer argument
* @b: integer argument
* Return: the result of a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - remainder
* @a: integer argument
* @b: integer argument
* Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
