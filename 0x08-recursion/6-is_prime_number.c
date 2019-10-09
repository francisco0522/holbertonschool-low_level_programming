int primeNumber(int n, int a);
#include "holberton.h"
/**
* is_prime_number - returns 1 if the input integer is a prime number,
* @n: int n
* Return: Always 0.
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (primeNumber(n, 2));
	}
}
/**
* primeNumber - search the prime number
* @n: int n
* @a: int a
* Return: no se lo que retorna
*/

int primeNumber(int n, int a)
{
	if (n == a)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (primeNumber(n, a + 1));
	}
}
