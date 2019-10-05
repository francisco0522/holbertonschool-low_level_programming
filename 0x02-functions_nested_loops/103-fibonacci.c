#include"holberton.h"
#include<stdio.h>
/**
* main - prints the sum of all the multiples of 3 or 5 below 1024.
*
* Return: Always 0.
*/
int main(void)
{
	long i, j, k, l, sum, temp;

	i = 0;
	j = 0;
	k = 1;
	l = 0;
	sum = 0;

	for (; i < 1;)
	{
		if (l < 4000000)
		{
			l = j + k;
			temp = k;
			k = l;
			j = temp;
			if ((l % 2) == 0)
			{
			sum = sum + l;
			}
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
