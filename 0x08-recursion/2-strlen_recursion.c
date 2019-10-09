#include "holberton.h"
/**
* _strlen_recursion - returns the factorial of a given number.
* @s: char s
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	{
	return (0);
	}

}
