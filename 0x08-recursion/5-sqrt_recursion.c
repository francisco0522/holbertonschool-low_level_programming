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
/**
* sqrtHolb - make the sqrt function
* @n: int n
* @a: int a
* Return: no se lo que retorna
*/

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
