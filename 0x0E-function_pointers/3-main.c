#include<stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - print the result of calc
 *
 * @argc: Num of arguments
 * @argv: The arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	res = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	printf("res: %i\n", res);
	return (0);
}
