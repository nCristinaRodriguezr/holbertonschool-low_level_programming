#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower- devuelve 1 si es minus y 0 si no
 * @c: variable de entrada
 * Return: devuelve 0 o 1
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
