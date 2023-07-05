#include <stdio.h>
#include "main.h"
/**
 * is_prime_number- devuelva 1 si el entero de entrada
 * es un número primo, de lo contrario devuelva 0.
 * @n:numero ingresado por el usuario
 * Return: devuelve 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (help_prime(n, 2));
}
/**
 * help_prime- devuelva 1 si el entero de entrada
 * es un número primo, de lo contrario devuelva 0.
 * @n: numero ingresado por el usuario
 * @divisor: el divisor empieza en 2, ya que en 1 se condicionó arriba
 * y no hay necesidad incluirlo.
 * Return: Devuelve 1 si es primo, y 0 si no.
 */
int help_prime(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (help_prime(n, divisor + 1));
}
