#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - return empty pointer.
 *
 *@s1: string 1
 *@s2: string 2
 *@n: size to concatenate
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int t1, t2, j, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (t1 = 0 ; s1[t1] != '\0' ; t1++)
	{
	}
	for (t2 = 0 ; s2[t2] != '\0' ; t2++)
	{
	}
	printf("t1: %u t2: %u \n", t1, t2);
	if (n > t2)
		n = t2;

	p = malloc(sizeof(char) * (t1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		p[x] = s1[x];
	}
	for (j = 0 ; j <= n ; j++)
	{
		p[x] = s2[j];
		x++;
	}
	p[x] = '\0';
	return (p);
}
