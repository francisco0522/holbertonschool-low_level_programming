#include"holberton.h"
/**
* rev_string - that reverses a string
* @s: char s
* Return: Always 0.
*/
void rev_string(char *s)
{
	int l, i;
	char temp;

	i = 0;
	l = 0;
	for (; s[l] != '\0';)
	{
	l++;
	}
	l = l - 1;
	for (i = 0; i <= l; i++)
	{
	temp = s[i];
	s[i] = s[l];
	s[l] = temp;
	l = l - 1;
	}
}
