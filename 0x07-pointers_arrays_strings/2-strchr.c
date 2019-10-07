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
	char *p = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
		if (s[i] == '\0' && s[i] != c)
		{
			p = '\0';
		}
	}
	return (p);
}
