#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	char l = 'a';

	do {
	if (c < 10)
	{
		putchar('0' + c);
	} else
	{
		putchar(l);
		l++;
	}
	c++;
	} while (c <= 15);
	putchar('\n');
	return (0);
}
