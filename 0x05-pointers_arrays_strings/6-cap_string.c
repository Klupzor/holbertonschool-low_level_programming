#include <stdio.h>
/**
 * cap_string - Capitalize text.
 *
 * @s: char to capitalize.
 * Return: Converted.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == 9 ||
		s[i] == ' ' || s[i] == '\n')
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
	}
	return (s);
}
