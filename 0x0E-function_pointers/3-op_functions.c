#include<stdlib.h>
#include<stdio.h>
/**
 * op_add - add 2 int
 *
 * @a: number 1
 *@b: number 2
 * Return: result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs 2 int
 *
 * @a: number 1
 * @b: number 2
 * Return: result.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 int
 *
 * @a: number 1
 * @b: number 2
 * Return: result.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 int
 *
 * @a: number 1
 * @b: number 2
 * Return: result.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a mod b
 *
 * @a: number 1
 * @b: number 2
 * Return: result.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
