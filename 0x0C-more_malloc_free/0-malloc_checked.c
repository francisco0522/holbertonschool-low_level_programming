#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* malloc_checked - allocates memory using malloc
* @b: unsigned int b
*
* Return: arr.
*/
void *malloc_checked(unsigned int b)
{
	char *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
	exit(98);
	}
	return (arr);
}
