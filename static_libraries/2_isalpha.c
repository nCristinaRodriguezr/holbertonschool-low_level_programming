#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha- devuelve 1 si es letra y 0 si no
 * @c: variable de entrada
 * Return: devuelve 0 o 1
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
