#include "holberton.h"
/**
* *_strncat - concatenates two strings
* @dest: char dest
* @src: char src
* @n: int n
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	for (; dest[i] != '\0';)
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
	}
	if (n > k)
	{
	n = k;
	}
	for (j = 0; j < n;)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
