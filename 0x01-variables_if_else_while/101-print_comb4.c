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

	for (b = 48 ; b <= 57; b++)
	{
	for (c = b + 1; c <= 57; c++)
	{
	for (a = c + 1; a <= 57; a++)
	{
		putchar(b);
		putchar(c);
		putchar(a);
		if (c + b + a < 168)
		{
			putchar(44);
			putchar(32);
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
