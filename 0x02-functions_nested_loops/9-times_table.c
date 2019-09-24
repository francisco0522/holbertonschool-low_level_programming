#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y < 10; y++)
	{
	z = (x * y);
	if ((z / 10) != 0)
	{
	_putchar (z / 10 + '0');
	}
	else
	{
	if (y > 0)
	{
	_putchar (' ');
	}
	}
	_putchar (z % 10 + '0');
	if (y < 9)
	{
	_putchar (',');
	_putchar (' ');
	}
	}
	_putchar ('\n');
	}
}
