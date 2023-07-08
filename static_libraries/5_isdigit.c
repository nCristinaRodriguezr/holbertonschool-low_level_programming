#include <stdio.h>
#include "main.h"
/**
 * _isdigit-verifica un digito de 0 a 9
 * @c: variable de entrada
 * Return: devuelve 0 o 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
