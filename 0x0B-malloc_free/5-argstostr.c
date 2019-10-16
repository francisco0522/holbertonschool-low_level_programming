#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program
*@ac: int ac
*@av: char av
* Return: this function return a char pointer to the concatenate arguments.
*/
char *argstostr(int ac, char **av)
{
char *arr, *a;
int i, j, k, l ,m, n;

n = 0;
k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for(j = 0; av[i][j] != '\0'; j++)
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
}
