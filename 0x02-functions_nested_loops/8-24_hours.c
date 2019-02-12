#include "holberton.h"
/**
 * jack_bauer - Print on minnutes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	char H, h, M, m, maxh;

	for (H = '0' ; H <= '2' ; H++)
	{
		maxh = H < '2' ? '9' : '3';
		for (h = '0' ;  h <= maxh ; h++)
		{
			for (M = '0' ;  M <= '5' ; M++)
			{
				for (m = '0' ;  m <= '9' ; m++)
				{
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_putchar(M);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
