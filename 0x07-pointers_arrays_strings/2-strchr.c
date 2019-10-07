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
	while (s)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
			return (0);
		s++;
	}
	return (0);
}

