#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	if (a == 'e')
	{
	a = 'f';
	}
	else if (a == 'q')
	a = 'r'
	}
	else
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
