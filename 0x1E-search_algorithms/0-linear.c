#include "search_algos.h"

/**
 *  linear_search -  searches for a value with the Linear search algorithm
 *  @array: array
 *  @size: size
 *  @value: int
 *  Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
