#include "holberton.h"
/**
 * times_table - Print table
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
	int H, h, r;

	for (H = 0 ; H <= 9 ; H++)
	{
		for (h = 0 ; h <= 9 ; h++)
		{
			r = H * h;
			if (r > 10)
				_putchar(r / 10 + '0');
			else
				if (r != 0)
					_putchar(' ');
			_putchar(r % 10 + '0');
			if (h < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (H == 0)
					_putchar(' ');
			}
		}
		_putchar(10);
	}
}
