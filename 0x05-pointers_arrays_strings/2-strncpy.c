/**
 * _strncpy - prints concat string whit n bits.
 *
 * @dest: char dest.
 * @src: copy char string.
 * @n: bits.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c, l;

	for (l = 0 ; src[l] != '\0'; l++)
	{
	}
	for (c = 0 ; c < n; c++)
	{
		if (c > l)
			dest[c] = '\0';
		else
			dest[c] = src[c];
	}
	return (dest);
}
