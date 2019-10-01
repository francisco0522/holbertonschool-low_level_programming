#include "holberton.h"
/**
* print_number - prints a square, and new line
* @n: int n
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	int i, y, t, u;

	i = 1;
	y = 0;
	t = 0;
	if (n == 0)
	{
	_putchar('0');
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
		while (i < n)
		{
			if (i < 1000000000)
			{
			i = i * 10;
			}
			else
			{
			u = n % 10;
			n = n / 10;
			t = 1;
			}
		}
		for (; i > 9;)
		{
			i = i / 10;
			y = n / i;
			if (y <= 9)
			{
				_putchar(y + '0');
			}
			else
			{
				y = (n / i) % 10;
				_putchar(y + '0');
			}
			if (t == 1)
			{
			_putchar(u + '0');
			}
			if (i == 10)
			{
				y = (n % i);
			}
		}

}
