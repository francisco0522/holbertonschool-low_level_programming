#int primeNumber(int n, int a);
#include "holberton.h"
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not,
* @s: char s
* Return: Always 0.
*/
int is_palindrome(char *s)
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
