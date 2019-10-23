#include "function_pointers.h"
/**
* int_index - array
* @array: array
* @size: size
* @cmp: function
* Return: Nothing.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && size && cmp)
	{
	if (size <= 0)
	return (-1);
	j = size;
	for (i = 0; i < j; i++)
	if (cmp(array[i]) != 0)
	return (i);
	}
	return (0);

}
