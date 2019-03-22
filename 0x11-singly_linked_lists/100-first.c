#include<stdio.h>

void startfun(void)__attribute__((constructor));
/**
 * startfun - Runs before main
 *
 */

void startfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
