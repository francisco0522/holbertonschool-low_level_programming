#include"holberton.h"
#include<stdio.h>
/**
* main - prints the sum of all the multiples of 3 or 5 below 1024.
*
* Return: Always 0.
*/
int main(void)
{
	long i, j, k, l, temp, d, m;

	j = 0;
	k = 1;
	for (i = 0; i < 50; i++)
	{
	l = j + k;
	temp = k;
	k = l;
	j = temp;
	if (i < 49)
	{
	printf("%ld, ", l);
	}
	else
	{
	printf("%ld", l);
	}
	}
	printf("\n");
	return (0);
}
