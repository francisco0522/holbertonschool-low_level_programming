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

	for (i = 0; s[i] != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (s[i] == '\0')
		return (0);
	return (0);
}

