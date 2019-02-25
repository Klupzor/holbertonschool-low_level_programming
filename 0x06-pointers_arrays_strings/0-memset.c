/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed.
 * @b: constant byte.
 * @n: fills the first n bytes.
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n ; i++)
		s[i] = b;
	return (s);
}
