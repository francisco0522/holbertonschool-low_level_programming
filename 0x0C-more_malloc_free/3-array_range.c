#include<stdio.h>
#include<stdlib.h>
#include"holberton.h"
/**
* array_range - creates an array of integers
* @min: int min
* @max: int max
*
* Return: arr
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, rest;

	rest = max - min;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (rest + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (rest); i++, min++)
	{
		arr[i] = min;
	}
	return (arr);

}
