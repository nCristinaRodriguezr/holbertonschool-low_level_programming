#include <stdio.h>
#include "main.h"
/**
 * *_memset-llena la memoria con un byte constante
 * @s: apuntador
 * @b: valor que da el usuario
 * @n: numero de posiciones de la cadena
 * Return: puntero s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
