/**
 * _isdigit - evaluate if character is a number 9 - 0
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
