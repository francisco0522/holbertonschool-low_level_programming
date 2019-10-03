#include "holberton.h"
/**
* *_strcmp - compares two strings
* @s1: char s1
* @s2: char s2
* Return: valu
*/
int _strcmp(char *s1, char *s2)
{
	int i, a, b, c;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	a = *s1;
	b = *s2;
	if (a != b)
	{
	c = a - b;
	break;
	}
	else
	{
	c = 0;
	}
	i++;
	}

	return (c);
}
