#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"

void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void p_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void p_string(va_list args)
{
	printf("%s", va_arg(args, char *));
}

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
		if (prt[pc].c != NULL && format[fc + 1] != '\0')
			printf(", ");
		fc++;
	}
	va_end(args);
	printf("\n");
}
