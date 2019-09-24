#include"holberton.h"
#include<stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: int n
 * Return: Always 0.
 */
void print_to_98(int n)
{

	if (n < 98)
	{
	while (n < 98)
	{
	printf("%d, ", n);
	n++;
	}
	printf("%d", n);
	printf("\n");
	}
	else if (n > 98)
	{
	while (n > 98)
	{
	printf("%d, ", n);
	n--;
	}
	printf("%d", n);
	printf("\n");
	}
	else
	printf("%d\n", n);
}
