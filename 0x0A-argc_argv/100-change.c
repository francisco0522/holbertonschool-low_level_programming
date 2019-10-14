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
    int i, total, fijo, count;

    count = 0;
    if (argc != 2)
    {
    printf("Error\n");
    return (1);
    }
    else
    {
    fijo = atoi(argv[1]);
    total = atoi(argv[1]);
    if (total < 0)
    {
    printf("0");
    return (0);
    }
    for (i = 0; i < fijo;)
    {
    if (total % 25 == 0)
    {
    total = total - 25;
    i = i + 25;
    count++;
    }
    else if(total % 10 == 0)
    {
    total = total - 10;
    i = i + 10;
    count++;
    }
    else if (total % 5 == 0)
    {
    total = total - 5;
    i = i + 5;
    count++;
    }
    else if (total % 2 == 0)
    {
    total = total - 2;
    i = i + 2;
    count++;
    }
    else if (total % 1 == 0)
    {
    total = total - 1;
    i = i + 1;
    count++;
    }
    }
    printf("%d\n", count);
    return (0);
    }
}
