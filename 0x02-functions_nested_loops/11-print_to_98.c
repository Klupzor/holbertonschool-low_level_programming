#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print numbers
 *
 *@n: The input number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
	int H;

	if (n < 98 && n >= 0)
	{
		for (H = n ; H <= 98 ; H++)
		{
			printf("%i", H);
			if (H != 98)
				printf(", ");
		}
	}
	if (n > 98)
		for (H = n ; H >= 98 ; H--)
		{
			printf("%i", H);
			if (H != 98)
				printf(", ");
		}
	if (n == 98)
	{
		printf("%i", n);
			if (n != 98)
				printf(", ");
	}
	if (n < 0)
		for (H = n ; H <= 98 ; H++)
		{
			printf("%i", H);
			if (H != 98)
				printf(", ");
		}
	printf("\n");
}
