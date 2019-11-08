#include "holberton.h"
/**
 * get_bit - check the code for Holberton School students.
 * @n: int;
 * @index: int;
 * Return: the converted number, or 0
 */
void print_binary(unsigned long int n)
{
        if (n < 2)
	{
	_putchar(n + '0');
	return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
