#include "holberton.h"
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
}
