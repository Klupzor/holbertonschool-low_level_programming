#include <stdio.h>
#include <stdlib.h>

/**
 * sz - Calculate size of pointer char.
 * @arg: pointer string
 *
 * Return: Size.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sz(char *arg)
{
	int t, c = 0;

	for (t = 0 ; arg[t] != '\0' ; t++)
	{
		if (arg[t] != ' ' && arg[t + 1] == ' ' || arg[0] != ' ')
			c++;
	}
	return (c);
}

/**
 * strtow - Prints the words on matrix.
 * @str: string
 *
 * Return: argv on pointer.
 * On error, -1 is returned, and errno is set appropriately.
 */

char **strtow(char *str)
{
	int i, j, col = 0, c = 0;
	char **s;

	col = sz(str);
	s = (char **) malloc((col + 1) * sizeof(char));
	for (i = 0 ; i < col ; i++)
	{
		s[i] = (char *) malloc((col + 1) * sizeof(char));
	}
	return (s);
}
