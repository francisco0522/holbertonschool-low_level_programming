#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{

	if (n < 98)
	{
	for (; n == 98; n++)
	{	
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	else if (n > 98)
	{
	for (; n == 98; n--)
	{
	_putchar(n / 10 + '0');
	_putchar(n / 10 + '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	else
	{
	_putchar(n);
	}
}
