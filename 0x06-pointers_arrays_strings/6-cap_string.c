#include"holberton.h"
/**
* *char *cap_string - capitalizes all words of a string
* @a: char a
* Return: Always 0.
*/
char *cap_string(char *a)
{
	int i, j;
	int e[] = {32, 9, 10, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (a[0] > 96 && a[0] < 123)
	{
	a[0] -= 32;
	}  
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (a[i] == e[j])
			{
				if (a[i + 1] > 96 && a[i + 1] < 123)
				{
					a[i + 1] -= 32;
				}
			}
		}
	}
	return (a);
}
