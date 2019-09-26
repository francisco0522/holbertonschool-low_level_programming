#include "holberton.h"
/**
* print_triangle - prints a triangle, and new line
* @size: int size
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int f;

	if (size >= 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	for (k = 0; k < size; k++)
	{
	for (f = 0; f < size; f++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
	}
	else
	{
	_putchar('\n');
	}
}
