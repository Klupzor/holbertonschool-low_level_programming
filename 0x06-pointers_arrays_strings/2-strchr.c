/**
 * _strchr -locates a charter in a string.
 *
 *@s: pointer wtih char
 *@c: char to find.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
