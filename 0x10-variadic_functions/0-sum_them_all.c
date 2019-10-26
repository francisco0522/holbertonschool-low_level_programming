#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	if (n == 0)
	return (0);

	j = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, int);
	}
	va_end(ap);
	return (j);

}
