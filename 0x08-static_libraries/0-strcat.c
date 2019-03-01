/**
 * _strcat - prints concat string.
 *
 * @dest: char dest.
 * @src: copy char string.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int c, i, cont = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (c = i ; src[cont] != '\0' ; c++)
	{
		dest[c] = src[cont];
		cont++;
	}
	dest[c] = '\0';
	return (dest);
}
