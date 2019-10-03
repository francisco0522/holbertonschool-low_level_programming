#include "holberton.h"
/**
* *_strcmp - compares two strings
* @s1: char s1
* @s2: char s2
* Return: valu
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = s1[0];
	j = s2[0];
	k = i - j;
	return (k);
}
