#include "holberton.h"
/**
 * rev_string - prints reverse  string.
 *
 * @s: char string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, c, p = 0;
	char l;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (c = i - 1 ; c >= i / 2 ; c--)
	{
		l = s[p];
		s[p] = s[c];
		s[c] = l;
		p++;
	}
}
