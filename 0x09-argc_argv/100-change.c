#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Prints the minimum number of coins to make change.
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	int r = 0, i, num, div, mod;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2 || !(atoi(argv[1]) || *argv[1] == '0'))
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0 ; i < 5 ; i++)
	{
		div = num / cents[i];
		mod = num % cents[i];
		r += div;
		num = mod;
	}
	printf("%i\n", r);
	return (0);
}
