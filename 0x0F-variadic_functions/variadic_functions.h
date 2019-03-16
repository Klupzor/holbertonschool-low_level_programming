#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
/**
 * struct typ - Struct operators
 *
 * @c: Char
 * @tp: The function associated
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
