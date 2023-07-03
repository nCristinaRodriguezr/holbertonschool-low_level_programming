#include <stdio.h>
#include "main.h"
/**
 * *_strchr-localiza un caracter en una cadena de texto
 * @s: apuntador
 * @c: es el caracter que la funcion debe buscar
 * Return: puntero ptr
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr && *ptr != c)
	{
		ptr++;
	}
	if (*prt != "\O")
	{
		return (ptr);
	}
	return (NULL);
}
