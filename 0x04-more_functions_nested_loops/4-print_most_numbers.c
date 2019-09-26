#include "holberton.h"
/**
* print_most_numbers - prints the # (01356789) followed by a new line
*
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}
