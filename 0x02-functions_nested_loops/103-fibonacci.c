#include"holberton.h"
#include<stdio.h>
/**
* main - prints the sum of all the multiples of 3 or 5 below 1024.
*
* Return: Always 0.
*/
int main(void)
{
	long i, j, k, l, temp;

	i = 0;
	j = 0;
	k = 1;
	l = 0;

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
				printf("%ld", l);
				if (l == 3524578)
				{
					printf("\n");
				}
				else
				{
					printf(", ");
				}
			}
		}
		else
		{
			i++;
		}
	}
	return (0);
}
