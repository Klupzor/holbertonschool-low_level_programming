/**
 * binary_to_uint - check the code for Holberton School students.
 *
 * @b: String number on binary.
 * Return: the number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int factor = 1, result = 0;
	int size, i;

	for (size = 0 ; b[size] != '\0' ; size++)
	{
		if (b[size] < 48 || b[size] > 49)
			return (0);
	}

	for (i = size - 1 ; i >= 0 ; --i)
	{
		result += (b[i] - '0') * factor;
		factor *= 2;
	}

	return (result);

}
