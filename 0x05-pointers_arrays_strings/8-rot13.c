/**
 * rot13 - Convert to rot13 language.
 *
 * @s: char to convert.
 * Return: converted.
 */
char *rot13(char *s)
{
	int i, c;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (c = 0 ; c < 52 ; c++)
		{
			if (input[c] == s[i])
			{
				s[i] = out[c];
				break;
			}
		}
	}
	return (s);
}
