#include "holberton.h"
/**
* *_strncpy -  copies a string
* @dest: char dest
* @src: char src
* @n: int n
* Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n;)
	{
		if (j <= i)
		{
		dest[j] = src[j];
		}
		else
		{
		dest[j] = '\0';
		}
		j++;
	}
	return (dest);
}
