#include"holberton.h"
/**
* print_times_table - check the code for Holberton School students.
* @n: int n
* Return: Always 0.
*/
void print_times_table(int n)
{
	int x, y, z;

	if (n < 15 || n > 0)
	{
	for (x = 0; x <= n; x++)
	{
	for (y = 0; y <= n; y++)
	{
	z = (x * y);
	if (z > 99)
	{
	_putchar (',');
	_putchar (' ');
	_putchar (z / 100 + '0');
	_putchar (z / 10 % 10 + '0');
	_putchar (z % 10 + '0');
	}
	else if (z >= 10 && z < 100)
	{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
	_putchar ((z / 10) + '0');
	_putchar ((z % 10) + '0');
	}
	else if (y > 0)
	{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
	_putchar (' ');
	_putchar ((z % 10) + '0');
	}
	else
	{
	_putchar ((z % 10) + '0');
	}
	}
	_putchar ('\n');
	}
	}
	else
	{
	return;
	}
}
