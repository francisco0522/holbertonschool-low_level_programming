#include "function_pointers.h"
#include "3-calc.h"
/**
* get_op_func - operation function
* @s: operator
* Return: pointer.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 4)
	{
	if (s == ops[i][0])
	{
	return (ops[i][1]);
	}
	return ("Error");
	exit(99);
	}
}
