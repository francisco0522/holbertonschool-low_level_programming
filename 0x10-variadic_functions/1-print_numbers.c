#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: # arguments
 * @separator: string to be printed btw numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	j = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		if (i < (n - 1) && separator != NULL)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	printf("\n");
	va_end(ap);

}
