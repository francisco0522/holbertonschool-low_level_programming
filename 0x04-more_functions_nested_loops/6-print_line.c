#include "holberton.h"
/**
* print_line - draws a straight line in the terminal
* @n: int n
*
* Return: Always 0 (Success)
*/
void print_line(int n)
{

	while (n > 0)
	{
	_putchar(95);
	n--;
	}
	_putchar('\n');
}
