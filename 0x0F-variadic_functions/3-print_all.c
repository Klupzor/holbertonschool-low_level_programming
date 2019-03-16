#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
 * p_char - print chars.
 *
 * @args: Argumentos.
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * p_int - print ints.
 *
 * @args: Argumentos.
 */
void p_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * p_float - print dobles.
 *
 * @args: Argumentos.
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * p_string - print strings.
 *
 * @args: Argumentos.
 */
void p_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - Print in diferents formats.
 *
 * @format: Format to printing.
 */
void print_all(const char * const format, ...)
{
	typ_t prt[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};
	va_list args;
	int fc = 0, pc;

	va_start(args, format);
	while (format[fc] != '\0')
	{
		pc = 0;
		while (prt[pc].c != NULL)
		{
			if (*prt[pc].c == format[fc])
			{
				prt[pc].tp(args);
				break;
			}
			pc++;
		}
		if (prt[pc + 1].c != NULL && format[fc + 1] != '\0')
			printf(", ");
		fc++;
	}
	va_end(args);
	printf("\n");
}
