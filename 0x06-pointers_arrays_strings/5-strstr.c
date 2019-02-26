#include <stdio.h>
/**
 * _strstr - locate a string.
 *
 * @s: String.
 * @c: pattern.
 * Return: Always pointer.
 */

char *_strstr(char *s, char *c)
{
	int cont, i, t;

	for (cont = 0 ; c[cont] != '\0' ; cont++)
	{
	}
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c[0])
		{
			for (t = 0 ; c[t] == s[i + t]; t++)
			{
				if (t == cont)
					return (s += i);
			}

		}
	}
	return (0);
}
