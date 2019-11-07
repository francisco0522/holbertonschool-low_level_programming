#include "holberton.h"
#include <math.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	i = 0;
	num = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			num = (num * 2) + (b[i] - '0');
		else
			return (0);
	}
	return (num);
}
