#include "holberton.h"
/**
* *_strcmp - compares two strings
* @dest: char dest
* @src: char src
* @n: int n
* Return: dest.
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = s1[0];
	j = s2[0];
	k = i - j;
	return (k);
}
