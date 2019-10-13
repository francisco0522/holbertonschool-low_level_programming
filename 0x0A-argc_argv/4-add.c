#include <stdio.h>
#include <stdlib.h>
/**
* main - returns (0)
* @argc: int argc
* @argv: char argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i, j, num, sum;

sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
sum = sum + num;
}
printf("%d\n", sum);
return (0);
}
