#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @n: # arguments
 * @separator: string to be printed btw numbers
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *j;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, char*);
		if (j == NULL)
			printf("(nil)");
		else if (i < (n - 1) && separator != NULL)
			printf("%s%s", j, separator);
		else
			printf("%s", j);
	}
	printf("\n");
	va_end(ap);

}
