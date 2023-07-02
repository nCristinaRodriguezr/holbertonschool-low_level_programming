#include <stdio.h>
#include "main.h"
/**
 * *_strncat-concatena dos cadenas
 * teniendo en cuenta n posisiones de la segunda cadena src.
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 * Return: Devuelve dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
/*
 * aqui se hace el bucle while hasta que una de las condiciones no se cumpla,
 * hasta que *src ya no tenga caracteres,
 * hasta que n no sea mayor a 0
 * n-- quiere decir que el numero hirá disminuyendo,
 * conforme copia posiciones en dest, hasta que n llegue a cero.
 */
	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
