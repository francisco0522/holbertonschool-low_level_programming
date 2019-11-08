#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: int;
 * @index: int;
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	else if (*n != 0)
	{
		*n = *n - (1 << index);
		return (1);
	}
	else
	{
		*n = *n;
		return (1);
	}
}
