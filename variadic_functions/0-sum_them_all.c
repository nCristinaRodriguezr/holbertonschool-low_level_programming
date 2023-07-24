#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- retorna la suma de todos los parametros
 * @n: argumento constante y sin signo
 * Return: Devuelve las el resultado de la suma
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
