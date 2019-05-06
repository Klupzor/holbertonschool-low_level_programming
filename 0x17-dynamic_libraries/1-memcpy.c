/**
 * _memcpy - fills memory with a constant byte.
 * @s: memory area pointed.
 * @b: constant byte pointer.
 * @n: fills the first n bytes.
 *
 * Return: Nothing.
 */

char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b[i];
	return (s);
}
