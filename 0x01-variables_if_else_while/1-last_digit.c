#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d", n);
	l = n % 10;
	if (n > 5)
		printf(" is %d and is greater than 5\n", l);
	if (n == 0)
		printf(" is %d and is 0\n", l);
	if (n < 6)
		printf(" is %d and is less than 6 and not 0\n", l);
	return (0);
}
