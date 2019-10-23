#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
* main - check the code for Holberton School students.
* @argc: int argc
* @argv: char argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3)
	{
	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d", result);
}
