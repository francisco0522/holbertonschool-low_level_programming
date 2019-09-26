#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
*
* Return: Always 0.
*/
int main(void)
{
	long int num, i, maxf;

	num = 612852475143;
	i = 2;
	while (i <= num)
	{
	if (num % i == 0)
	{
	num = num / i;
	maxf = i;
	}
	else
	{
	i++;
	}
	}
	printf("%ld ", maxf);
	printf("\n");
	return (0);
}
