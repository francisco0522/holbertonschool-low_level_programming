#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* string_nconcat - concatenates two strings
* @s1: char s1
* @s2: char s2
* @n: unsigned int
*
* Return: arr.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k, l;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	arr = malloc(sizeof(*arr) * (n + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		arr[i + l] = s2[l];
	}
		return (arr);
}
