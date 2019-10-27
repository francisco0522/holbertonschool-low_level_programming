#include "variadic_functions.h"
/**
 * char - prints char.
 * @cade: va_list
 * Return: Always 0.
 */
void print_char(va_list cade)
{
	printf("%c", va_arg(cade, int));
}
/**
 * int - prints integer.
 * @cade: va_list
 * Return: Always 0.
 */
void print_int(va_list cade)
{
	printf("%d", va_arg(cade, int));
}
/**
 * float - prints float.
 * @cade: va_list
 * Return: Always 0.
 */
void print_float(va_list cade)
{
	printf("%f", va_arg(cade, double));
}
/**
 * string - prints string.
 * @cade: va_list
 * Return: Always 0.
 */
void print_string(va_list cade)
{
	char *cad = (va_arg(cade, char*));
	if (cad == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", cad);
}
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{

	va_list ap;
	int i = 0;
	int j;
	char *separator = "";

	cad_t cads[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while(format && format[i])
	{
		j = 0;
		while (cads[j].cade)
		{
			if (format[i] == cads[j].cade[0])
			{
				printf("%s", separator);
				cads[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
