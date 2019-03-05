#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints result that multiplies two numbers.
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc - 1 == 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%i\n", num1 * num2);
		return (1);
	}
	else
		printf("Error\n");
	return (0);
}
