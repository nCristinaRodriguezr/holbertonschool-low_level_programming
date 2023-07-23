#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func- esta funcion elige la funcion correcta para
 * para la operacion que el usuario quiere hacer
 * @s: apuntar a el simbolo de la funcion
 * Return: Devuelve NULL
 */
int (*get_op_func(char *s))(int, int)
{
	struct op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
