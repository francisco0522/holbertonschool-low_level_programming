#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
* @c: int c
* Return: Always 0.
*/
int _abs(int c)
{

	if (c < 0)
	{
	c = c * -1;
	}
	else
	{
	c = c;
	}
	return (c);
}
