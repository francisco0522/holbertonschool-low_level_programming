#include "holberton.h"
/**
* _isdigit - function that check for a digit (o trough 9)
* @c: int c
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
