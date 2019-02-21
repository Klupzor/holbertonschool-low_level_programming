/**
 * leet - Convert to 1337 language.
 *
 * @s: char to convert.
 * Return: converted.
 */
char *leet(char *s)
{
	int i, c;
	char letters[] = {'O', 'o', 'E', 'e', 'L', 'l', 'A', 'a', 'T', 't'};
	char numbers[] = {'0', '0', '3', '3', '1', '1', '4', '4', '7', '7'};

	for (c = 0 ; c < 10 ; c++)
	{
		for (i = 0 ; s[i] != '\0' ; i++)
		{
			if (letters[c] == s[i])
				s[i] = numbers[c];
		}
	}
	return (s);
}
