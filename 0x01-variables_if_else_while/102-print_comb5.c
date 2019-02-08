#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int b;
	int a;
	int f;

	for (b = 48; b <= 57; b++)
	{
	for (c = 48; c <= 57; c++)
	{
	for (a = b; a <= 57; a++)
	{
	for (f = c + 1; f <= 57 ; f++)
	{
		putchar(b);
		putchar(c);
		putchar(32);
		putchar(a);
		putchar(f);
		if (c + b + a + f < 227)
		{
			putchar(44);
			putchar(32);
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
