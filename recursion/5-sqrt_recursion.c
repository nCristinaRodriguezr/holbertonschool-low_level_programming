#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion- devuelva la raíz cuadrada natural de un número.
 * @n: variable 1
 * Return: devuelve el resultado la funsion recursion_max
 */
int _sqrt_recursion(int n)
{
	return (recursion_max(n, 0));
}
/**
 * recursion_max- devuelva la raíz cuadrada natural de un número.
 * @n: Numero entregado por el usuario para sacar la raiz cuadrada
 * @i: es la variable que se mueve de 0 al numero original o del usuario
 * Return: devuelve el resultado de la raiz cuadra de n
 */
int recursion_max(int n, int i)
{
	if (i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (recursion_max(n, i++));
	}
}
