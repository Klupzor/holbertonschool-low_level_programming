#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d", n);
	l = n % 10;
	if (l > 5)
		printf(" is %d and is greater than 5\n", l);
	if (l == 0)
	{
		printf(" is %d and is 0\n", l);
	} else
	{
	if (l < 6)
		printf(" is %d and is less than 6 and not 0\n", l);
	}
	return (0);
}
