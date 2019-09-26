#include "holberton.h"
/**
* print_number - prints a square, and new line
* @n: int n
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	int i, j, y;

	i = 1;
	y = 0;
	if (n == 0)
	_putchar(0 + '0');
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n > i)
	{
		while (i < n)
		{
			i = i * 10;
		}
		j = i;
		for (; j > 9;)
		{
			j = j / 10;
			y = n / j;
			if (y <= 9)
			{
				_putchar(y + '0');
			}
			else
			{
				y = (n / j) % 10;
				_putchar(y + '0');
			}
			if (j == 10)
			{
				y = (n % j);
			}
		}
		_putchar('\n');
	}
}
