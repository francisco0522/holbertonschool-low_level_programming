#include "holberton.h"
#include <stdio.h>
/**
* *_strstr - locates a substring
* @haystack: char haystack
* @needle: char needle
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *h = haystack;
	char *n = needle;
		while (*haystack == *n && *h != '\0' && *n != '\0')
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
			return (h);
			haystack = haystack + 1;
	}
	return (0);
}
