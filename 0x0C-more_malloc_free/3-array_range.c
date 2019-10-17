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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max - min; i++)
	{
		arr[i] = i;
	}
	return (arr);

}
