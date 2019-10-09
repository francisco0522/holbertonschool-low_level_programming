int sqrtHolb(int n, int a);
#include "holberton.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: int n
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrtHolb(n, 0));
	}
}

int sqrtHolb(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (sqrtHolb(n, a + 1));
	}
}
