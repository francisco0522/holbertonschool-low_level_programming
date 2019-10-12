#include <stdio.h>
/**
* main - returns (0)
* @argc: int argc
* @argv: char argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3)
	{
	printf("Error");
	return (1);
	}
	else
	{
	num1 = *argv[1] - '0';
	num2 = *argv[2] - '0';
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
	}
}
