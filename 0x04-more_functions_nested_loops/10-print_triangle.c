#include "holberton.h"
/**
* print_triangle - prints a triangle, and new line
* @size: int size
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int i, j;
	
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	if ((i + j) >= (size - 1))
	{
	_putchar(35);
	}
	else
	{
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
	}
}
