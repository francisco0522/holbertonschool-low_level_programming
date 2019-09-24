#include "holberton.h"
/**
* print_alphabet_x10 - check the code for Holberton School students.
*
*/
void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 0; i < 10; ++i)
	{
	for (a = 97; a <= 122; ++a)
	{
	if (a  != 0)
	_putchar(a);
	}
	_putchar('\n');
	}
}
