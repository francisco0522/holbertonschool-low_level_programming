#include <stdio.h>
/**
* main - returns (0)
* @argc: int argc
* @argv: char argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
	}
	i = i - 1;
	if (argc != i)
	{
	printf("%d\n", i);
	}
	return (0);
}
