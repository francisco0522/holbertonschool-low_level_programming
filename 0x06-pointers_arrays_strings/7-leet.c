#include"holberton.h"
/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @a: char a
* Return: Always 0.
*/
char *leet(char *a)
{
	int i, j;
	char b[] = "4307143071";
	char c[] = "AEOTLaeotl";
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (a[i] == c[j])
			{
				a[i] = b[j];
			}
		}
	}
	return (a);
}
