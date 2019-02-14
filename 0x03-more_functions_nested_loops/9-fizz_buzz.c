#include <stdio.h>
/**
 * main - printing fizz buzz.
 *
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int c;

	for (c = 1 ; c <= 100 ; c++)
	{
		if (c % 3 == 0)
			printf("Fizz");
		if (c % 5 == 0)
			printf("Buzz");
		if (c % 3 != 0 && c % 5 != 0)
			printf("%i", c);
		printf(" ");
	}
	return (0);
}
