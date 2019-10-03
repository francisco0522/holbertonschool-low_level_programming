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
		if (s1[i] != s2[i])
		{
		a = *s1;
		b = *s2;
		c = a - b;
		return (c);
		}
		i++;
	}

	if( s1[i] == '\0' || s2[i] == '\0')
	{
		c = 0;
	}

	return (c);
}
