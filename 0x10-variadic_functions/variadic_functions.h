#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct cad
{
	char *cade;
	void (*f)(va_list);
}cad_t;
void print_char (va_list ap);
void print_int (va_list ap);
void print_float (va_list ap);
void print_string (va_list ap);
#endif /* VARIADIC_FUNCTIONS_H */
