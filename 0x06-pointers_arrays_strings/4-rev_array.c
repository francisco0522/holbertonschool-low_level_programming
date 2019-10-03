#include "holberton.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: int a
* @n: int n
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n = n - 1;
	for (; i < n ; i++)
	{
	temp = a[i];
	*(a + i) = a[n];
	a[n] = temp;
	n--;
	}
}
