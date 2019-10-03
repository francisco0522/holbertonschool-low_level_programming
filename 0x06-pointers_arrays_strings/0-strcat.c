#include "holberton.h"
/**
* *_strcat - concatenates two strings
* @dest: char dest
* @src: char src
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (; dest[i] != '\0';)
	{
	i++;
	}
	for (j = 0; src[j] != '\0';)
	{
	dest[i + j] = src[j];
	j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
