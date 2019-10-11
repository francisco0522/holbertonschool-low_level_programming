int palin(char *s, int i, int f);
int leng(char *s);
#include "holberton.h"
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not,
* @s: char s
* Return: Always 0.
*/
int is_palindrome(char *s)
{
	int i, f;

	i = 0;
	f = leng(s);
	return (palin(s, i, f - 1));
}
/**
* palin - search a palindrome char
* @s: int s
* @i: int i
* @f: int f
* Return: no se lo que retorna
*/

int palin(char *s, int i, int f);
{
	if (i < f)
	{
		if (s[i] == s[f])
		{
			return (palin(s, i + 1; f - 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}
/**
* leng - return the lenght of a string
*@s: char s
*Return: No se que retorna
*/
int leng(char *s)
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
