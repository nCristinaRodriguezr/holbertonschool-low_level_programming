#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
 *  _isupper-verifica el carácter en mayúsculas
 * @c: variable de entrada
 * Return: devuelve 0 o 1
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
