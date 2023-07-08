#include <stdio.h>
#include "main.h"
/**
 * *_strcat-concatena dos cadenas
 * @dest: variable 1
 * @src: variable 2
 * Return: Devuelve dest
 */
char *_strcat(char *dest, char *src)
{
/*
 * aqui ptr apunta a lo mismo que apunta dest
 */
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
/*
 * aqui ptr se ha movido sobre dest, y ahora toma el valor al que
 * src esta apuntando y lo esta poniendo despues de la cadena de dest
 */
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
