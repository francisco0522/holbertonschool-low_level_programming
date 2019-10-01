#include"holberton.h"
/**
* _puts - prints a string, followed by a new line, to stdout
* @str: char str
* Return: Always 0.
*/
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
	c =  str[i];
	i++;
	_putchar (c);
	}
	_putchar('\n');
}
