/**
 * _strspn -get length of a prefix substring.
 *
 *@s: pointer wtih char
 *@accept: char to find.
 * Return: number of char finds.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c = 0, t, b;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		b = 0;
		for (t = 0 ; accept[t] != '\0' ; t++)
		{
			if (accept[t] == s[i])
			{
				c++;
				b = 1;
			}
		}
		if (b == 0)
			return (c);
	}
	return (0);
}
