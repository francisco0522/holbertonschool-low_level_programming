#include"holberton.h"
#include<stdio.h>
/**
* main - prints the sum of all the multiples of 3 or 5 below 1024.
*
* Return: Always 0.
*/
void main(void)
{
	int  i, j;

	j = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			j = j + i;
			printf("%d", j);
			printf("\n");
		}
	}
	printf("\n");
}
