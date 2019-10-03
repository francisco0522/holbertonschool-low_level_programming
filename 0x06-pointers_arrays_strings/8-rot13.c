#include"holberton.h"
/**
* *rot13 -  encodes a string using rot13.
* @a: char a
* Return: Always 0.
*/
char *rot13(char *a)
{
	int i, j;
	char b[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j])
			{
			a[i] = c[j];
			}
		}
	}
	return (a);
}
