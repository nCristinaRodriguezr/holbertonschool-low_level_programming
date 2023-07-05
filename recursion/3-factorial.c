#include <stdio.h>
#include "main.h"
/**
 * factorial- devuelve el factorial de un número dado
 * @n: variable 1
 * Return: devuelve el factorial
 * Factorial es por ejemplo factorial de 5 : 5x4x3x2x1=120
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
