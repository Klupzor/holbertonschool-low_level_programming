#include <stdio.h>
/**
 * string_toupper -Convert a lower case to uppercase.
 *
 * @s: char to convert.
 * Return: Inverted.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
