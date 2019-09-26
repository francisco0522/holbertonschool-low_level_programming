#include "holberton.h"
#include <stdio.h>
/**
* main - prints numbers (1 to 100) Fizz Buzz for the multiples of 3 and 5
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
	if ((i % 3) == 0 && (i % 5 == 0))
	{
	printf("FizzBuzz ");
	}
	else if ((i % 3) == 0 && (i % 5) != 0)
	{
	printf("Fizz ");
	}
	else if ((i % 5) == 0 && (i % 3) != 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
	printf("\n");
	return (0);
}
