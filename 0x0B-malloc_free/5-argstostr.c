#include "holberton.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int ac
 * @av: char av
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int acum = 0;
	int ind, i , j;
	char *ref;

	j = 0;
	if (ac==0 || av == NULL)
	{
		return(NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ind = 0;
		while (av[i][ind] != '\0')
		{
			ind++;	
		}
		acum += ind;
	}
	ref = malloc(sizeof(char) * (ac + acum + 1));
	if (ref == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ind = 0;
		while( av[i][ind] != '\0')
		{
			ref[j] = av[i][ind];
			ind++;
			j++;
		}
		ref[j]='\n';
		j++;
	}
	ref[j]='\0';
	return(ref);
=======
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program
*@ac: int ac
*@av: char av
* Return: 0
*/
char *argstostr(int ac, char **av)
{
char *arr, *a;
int i, j, k, l, m, n;

n = 0;
k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
k++;
}
k++;
}
k++;
arr = malloc(sizeof(*arr) * k);
if (arr == NULL)
return (NULL);
a = arr;
for (l = 0; l < ac; l++)
{
for (m = 0; av[l][m] != '\0'; m++)
{
arr[n] = av[l][m];
n++;
}
arr[n] = '\n';
n++;
}
return (a);
>>>>>>> 2eaf8e6dd4e9ed54ec272f2b1e7635f0cddb24a3
}
