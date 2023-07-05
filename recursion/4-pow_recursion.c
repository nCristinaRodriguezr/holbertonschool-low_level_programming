#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion- devuelva el valor de x elevado a la potencia de y.
 * @x:variable 1
 * @y: varible 2
 * Return: devuelve el valor de x elevado a la potencia.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
