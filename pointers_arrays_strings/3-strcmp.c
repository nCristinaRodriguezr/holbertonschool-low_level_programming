#include <stdio.h>
#include "main.h"
/**
 * _strcmp-compara dos cadenas
 * @s1: variable 1
 * @s2: variable 2
 * Return: Devuelve un numero int,
 * 0 si las cadenas son iguales
 * un numero negativo o positivo si las cadenas no son iguales
 * tener en cuenta que utiliza la tabla ASCCI para restar los caracteres
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
