#include"holberton.h"
/**
* print_rev - prints a string, in reverse
* @s: char str
* Return: Always 0.
*/
void print_rev(char *s)
{
	int i;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	while (i >= 0)
	{
	c = s[i];
	_putchar(c);
	i--;
	}
	_putchar('\n');
}
