#include "holberton.h"
#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
while (haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		if (*haystack == '\0')
			return (0);
		haystack++;
	}
	return (0);
}
