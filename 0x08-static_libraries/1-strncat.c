/**
 * _strncat - prints concat string whit n bytes.
 *
 * @dest: char dest.
 * @src: copy char string.
 * @n: bytes.
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i, cont = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (c = i ; src[cont] != '\0'; c++)
	{
		if (cont < n)
		{
			dest[c] = src[cont];
			cont++;
		}
		else
			break;
	}
	dest[c] = '\0';
	return (dest);
}
