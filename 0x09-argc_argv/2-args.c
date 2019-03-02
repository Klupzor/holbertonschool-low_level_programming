#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the arguments recived.
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0 ; i < argc  ; i++)
	{
		printf("%s\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
