#include "function_pointers.h"
/**
* array_iterator - array
* @array: array
* @size: size
* @action: function
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j;

	j = size;
	if (array && size && action)
	{
	for (i = 0; i < j; i++)
	action(array[i]);
	}
}
