#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, k;

	for (c = 'a' ; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (k = 'A' ; k <= 'Z'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
