#include "holberton.h"
/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int t, c;
	char d;

	for (t = 0 ; t <= 10 ; t++)
	{
		for (c = 0 ; c <= 1 ; c++)
		{
			d = '0';
			while (d <= '9')
			{
				if (c == 1 && d == '5')
					break;
				if (c == 1)
					_putchar('1');
				_putchar(d);
				d++;
			}
		}
		_putchar('\n');
	}
}
