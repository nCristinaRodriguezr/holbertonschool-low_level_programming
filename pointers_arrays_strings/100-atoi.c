#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *  _atoi-convierte una cadena en un entero
 * @s: variable de entrada
 * Return: Devuelve el resultado con el signo adecuado
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
