#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 9;
	int o = 7;
	int a = 9;
	int e = 7;
	int r;
	int q;

	r = a*10+e;
	q = i*10+o;
	if (r != q)
	{
	putchar(q);
	putchar('\n');
	putchar(r);
	putchar('\n');
	}
	else
	{
	printf(":CCC");
	}
	return (0);
}
