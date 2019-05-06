/**
 * get_endianness -checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int var = 1;
	char *p = (char *) &var;

	return (*p + 48);
}
