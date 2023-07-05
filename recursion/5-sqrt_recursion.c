#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion- devuelva la raíz cuadrada natural de un número.
 * @n: variable 1
 * Return: devuelve el resultado la funsion recursion_max
 */
int _sqrt_recursion(int n)
{
	return (recursion_max(n, n));
}
/**
 * recursion_max- devuelva la raíz cuadrada natural de un número.
 * @n: Numero entregado por el usuario para sacar la raiz cuadrada
 * @i: Guarda n para no perder la referencia del numero original
 * Return: devuelve el resultado de la raiz cuadra de n
 */
int recursion_max(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (i == 0 || i == 1 || n * n == i)
	{
		return (n);
	}
	else
	{
		return (recursion_max(n - 1, i));
	}
}
