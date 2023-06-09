#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - select the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument to the programme
 * Return: a pointer to function corresponding to the operator given
 * as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (ops[i].op != NULL && *(opd[i].op) != *s)
		i++;
	return (ops[i].f);
}
