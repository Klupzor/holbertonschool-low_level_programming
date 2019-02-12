/**
 * _islower - return 1 if c is lowwercase else return 0
 *@c: Character input
 * Return: 1 lowercase, 0 is not
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
