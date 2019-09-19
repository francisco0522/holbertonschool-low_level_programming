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
	putchar(i);
	putchar(o);
	if ( i <= '9' )
	{
	if ( o < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
