#include "holberton.h"
/**
* *_strcmp - compares two strings
* @s1: char s1
* @s2: char s2
* Return: valu
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = *s1 - *s2;
	return (i);
}
