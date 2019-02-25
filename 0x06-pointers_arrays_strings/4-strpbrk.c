/**
 * _strchr -locates a charter in a string.
 *
 *@s: pointer wtih char
 *@c: char to find.
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *a)
{
	int i;
	do {
		for (i = 0 ; a[i] != '\0' ; i++)
		{
			if (*s == a[i])
				return (s);
		}
	} while (*s++);
	return (0);
}
