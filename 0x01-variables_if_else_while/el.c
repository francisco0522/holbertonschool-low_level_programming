#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '9';
	int o = '6';
	int a = '9';
	int e = '8';
	int r;
	int w;

	r = a*10+e;
	w = i*10+o;
	if (r != w)
	{
	putchar(w);
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
