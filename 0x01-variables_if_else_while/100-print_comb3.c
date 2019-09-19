#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int o;

	for (i = '0'; i <= '9'; ++i)
	{
	for (o = '0'; o <= '9'; ++o)
	{
	if (i != o)
	{
	if (o > i)
	{
	putchar(i);
	putchar(o);
	if (i < '8' || o < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
