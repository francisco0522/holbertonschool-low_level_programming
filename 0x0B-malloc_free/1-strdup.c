#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: char str;
* Return: Always 0.
*/
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	for (i = 0; str[i]; i++)
	{
	}
	arr = malloc(sizeof(*arr) * (i + 1));
	if (arr == NULL || str == NULL)
	{
	return ('\0');
	}
	for (j = 0; j < i; j++)
	{
	arr[j] = str[j];
	}
	return (arr);
}
