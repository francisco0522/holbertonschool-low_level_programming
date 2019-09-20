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
	int a;
	int u;
	int q;
	int r;

	for (i = '0'; i <= '9'; ++i)
	{
	for (o = '0'; o <= '9'; ++o)
	{
	for (a = '0'; a <= '9'; ++a)
	{
	for (u = '0'; u <= '9'; ++u)
	{
	q = i * 10 + o;
	r = a * 10 + u;
	if (q != r && i <= a && o <= u)
	{
	putchar(i);
	putchar(o);
	putchar(' ');
	putchar(a);
	putchar(u);
	if (i < '9' || o < '8' || a < '9' || u < '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
