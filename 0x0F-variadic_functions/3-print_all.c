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
	{
		printf("%p", s);
		return;
	}
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
	char *separ = "";

	va_start(args, format);
	while (format && format[fc] != '\0')
	{
		pc = 0;
		while (prt[pc].c != NULL)
		{
			if (*prt[pc].c == format[fc])
			{
				printf("%s", separ);
				prt[pc].tp(args);
				separ = ", ";
				break;
			}
			pc++;
		}
		fc++;
	}
	va_end(args);
	printf("\n");
}
