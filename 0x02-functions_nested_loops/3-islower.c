#include <ctype.h>
/**
 * _islower - return 1 if c is lowwercase else return 0
 *@c: Character input
 * Return: 1 lowercase, 0 is not
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
