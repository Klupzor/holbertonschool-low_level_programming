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
	int t;

	for (t = 0 ; arg[t] != '\0' ; t++)
	{
	}
	printf("size: %i\n", t);
	return (t);
}

/**
 * argstostr - Prints the arguments on pointer.
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: argv on pointer.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *argstostr(int argc, char **argv)
{
	int i, j, col = 0, c = 0;
	char *s;

	if (argc == 0 || argv == NULL)
		return (NULL);

	for (i = 0 ; i < argc  ; i++)
	{
		col += sz(argv[i]);
	}

	col += argc;
	printf("total: %i\n", col);
	s = malloc(col + 1 * sizeof(char));

	for (i = 0 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			s[c] = argv[i][j];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	return (s);
}
