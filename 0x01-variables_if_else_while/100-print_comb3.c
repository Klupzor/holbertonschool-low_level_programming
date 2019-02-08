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

	for (b=48 ; b <= 57; b++)
	{
		
	for (c = b + 1; c <= 57; c++)
	{
		putchar(b);
		putchar(c);
		if (c + b < 113)
		{
			putchar(44);
			putchar(32);
		}
	}
	}
	putchar('\n');
	return (0);
}
