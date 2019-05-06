/**
 * _abs - print absolute value of number
 *@c: Character input
 * Return: absolute value
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else
	if (c == 0)
	{
		return (c);
	}
	else
	{
		return (-c);
	}
}
