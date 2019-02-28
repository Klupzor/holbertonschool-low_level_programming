#include <stdio.h>
/**
 * fsize - find size of string.
 *
 *@s: string.
 *@h: inicial zise.
 * Return: size.
 */
int fsize(char *s, int h)
{

	if (*s != '\0')
		return (fsize(s + 1, h + 1));
	return (h);
}
/**
 * ftam - fing diferences of string.
 *
 *@s: string.
 *@i: inicial position.
 *@f: final position.
 * Return: 0 no palindrome 1 is palindrome.
 */

int ftam(char *s, int i, int f)
{
	if (i == f)
		return (1);
	if (s[i] == s[f])
		return (ftam(s, i + 1, f - 1));
	if (i > f + 1)
		return (1);
	return (0);
}
/**
 * is_palindrome - runs palindrome function.
 *
 *@s: string.
 * Return: ftam.
 */
int is_palindrome(char *s)
{
	return (ftam(s, 0, fsize(s, 0) - 1));
}
