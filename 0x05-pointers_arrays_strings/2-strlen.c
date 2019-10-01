#include<stdio.h>
#include"holberton.h"
/**
* _strlen - returns the length of a string
* @s: int s
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
