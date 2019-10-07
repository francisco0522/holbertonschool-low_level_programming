#include "holberton.h"
/**
* *_strchr - locates a character in a string
* @s: char s
* @c: char c
*
* Return: first occurrence of c or NULL
*/

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] == c)
		{
			p = (s + i);
			return (p);
		}
		else
		{
			i++;
		}
	}
	return ('\0');
}
