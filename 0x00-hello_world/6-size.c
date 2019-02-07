#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int integerType;
long int longIntType;
long long int longLongIntType;
float floatType;
char charType;

printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d byte(s)\n", sizeof(integerType));
printf("Size of a long int: %d byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return (0);
}
