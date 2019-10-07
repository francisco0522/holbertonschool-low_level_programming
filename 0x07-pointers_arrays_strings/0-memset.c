#include "holberton.h"
#include <stdio.h>
/**
* *_memset -  fills memory with a constant byte.
* @s: char s
* @b: char b
* @n: int n
*
* Return: pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
	s[i] = b;
	}
	return (s);
}
