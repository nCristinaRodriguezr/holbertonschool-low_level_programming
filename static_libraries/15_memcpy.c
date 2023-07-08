#include <stdio.h>
#include "main.h"
/**
 * *_memcpy-Copia el area de memoria de una cadena
 * @src: apuntador origen
 * @dest: apuntador destino
 * @n: numero de bytes que tiene la cadena
 * para el caso de los char es el mismo
 * numero de posiciones en la cadena
 * debido a que 1 char equivale a 1 byte
 * Return: puntero dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

