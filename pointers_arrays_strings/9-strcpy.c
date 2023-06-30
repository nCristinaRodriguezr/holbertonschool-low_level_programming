#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy- copia la cadena a la que apunta src
 * en el búfer al que apunta dest
 * @dest: variable de entrada
 * @src: variable 2
 * Return: devuelve original_dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
