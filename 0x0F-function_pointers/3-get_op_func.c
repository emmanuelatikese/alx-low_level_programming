#include "3-calc.h"

/**
 * get_op_func - get operation
 * @s: char
 * Return: returns pointer function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}
	};

	int i;

	if (s)
	{
		for (i = 0; ops[i].op; i++)
		{
			if (cus_strcmp(ops[i].op, s) == 0)
			{
				return (ops[i].f);
			}
		}
	}
	return (NULL);
}
