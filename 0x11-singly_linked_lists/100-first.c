#include<stdio.h>
void start(void) __attribute__ ((constructor));

/**
 * start - Runs before main
 *
 */

void start(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
