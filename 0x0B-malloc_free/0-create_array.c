#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* create_array - creates an array of chars
* @c: char c
* @size: the size of the memory to print
*
* Return: arr.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
	return ('\0');
	}
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
	return ('\0');
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	return (arr);
}
