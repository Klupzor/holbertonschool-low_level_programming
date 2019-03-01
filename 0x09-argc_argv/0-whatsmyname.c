#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the self name.
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	exit(EXIT_SUCCESS);
}
