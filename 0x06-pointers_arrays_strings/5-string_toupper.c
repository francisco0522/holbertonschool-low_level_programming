#include"holberton.h"
/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @a: char a
* Return: Always 0.
*/
char *string_toupper(char *a)
{
	int i;
	char b;

	for (i = 0; a[i] != '\0'; i++)
	{
	b = a[i];
	if (a[i] > 96 && a[i] < 123)
	{
	a[i] = a[i] - 32;
	}
	}
	return (a);
}
