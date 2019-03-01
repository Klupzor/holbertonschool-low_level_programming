/**
 * _isalpha - return 1 if c is a letter else return 0
 *@c: Character input
 * Return: 1 letter, 0 is not
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
