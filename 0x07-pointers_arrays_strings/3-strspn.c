#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
* @s: char s
* @accept: char accept
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = k + 1;
				break;
			}
		}
		if (accept[j] != s[i])
		{
		break;
		}
	}
	return (k);
}
