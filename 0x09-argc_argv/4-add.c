#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Prints result adds of positives numbers.
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	int r = 0, i;

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) || *argv[i] == '0')
			r += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", r);
	return (0);
}
