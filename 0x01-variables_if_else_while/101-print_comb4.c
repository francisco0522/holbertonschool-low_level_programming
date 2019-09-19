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
	int u;

	for (i = '0'; i <= '9'; ++i)
	{
	for (o = '0'; o <= '9'; ++o)
	{
	for (u = '0'; u <= '9'; ++u)
	{
	if (i != o)
	{
	if (i != u)
	{
	if (o != u)
	{
	if (o > i)
	{
	if (u > o)
	{
	putchar(i);
	putchar(o);
	putchar(u);
	if (i < '7' || o < '8' || u < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
