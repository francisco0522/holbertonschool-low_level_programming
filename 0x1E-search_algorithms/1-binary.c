#include "search_algos.h"
/**
 * binary_search - searches for a value with Binary search algorithm
 * @array: is the given array
 * @size: is array's size
 * @value: is the value to be search
 * Return: Index where the value is or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, leftValue, rightValue;

	if (array == NULL)
		return (-1);

	for (leftValue = 0, rightValue = size - 1; rightValue >= leftValue;)
	{
		printf("Searching in array: ");
		for (i = leftValue; i < rightValue; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = leftValue + (rightValue - leftValue) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rightValue = i - 1;
		else
			leftValue = i + 1;
	}

	return (-1);
}
