#include "holberton.h"
/**
* print_number - prints a square, and new line
* @n: int n
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	int i, y;

	i = 1;
	y = 0;
	if (n == 0)
	_putchar('0');
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
			if (i == 10)
			{
				y = (n % i);
			}
		}
	}
}
