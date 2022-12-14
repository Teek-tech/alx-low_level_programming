#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - entry point
 * @s: get sign to operate
 * Return: NULL if cant do operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	/* Return NULL if it can't operate */
	return (NULL);
}
