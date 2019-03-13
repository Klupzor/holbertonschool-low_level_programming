/**
 * print_name - prints a name.
 * @name: name to print
 * @f: fuction that prints.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
