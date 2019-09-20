#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, o, a, u, q, r;

	for (i = '0'; i <= '9'; ++i)
	{
	for (o = '0'; o <= '9'; ++o)
	{
	for (a = '0'; a <= '9'; ++a)
	{
	for (u = '0'; u <= '9'; ++u)
	{
	r = a * 10 + u;
	q = i * 10 + o;
	if (r != q)
	{
	if (i <= a)
	{
	if (i != a || o <= u)
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
	}
	}
	putchar('\n');
	return (0);
}
