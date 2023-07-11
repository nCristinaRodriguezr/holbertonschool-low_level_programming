#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strdup- devuelva un puntero a un espacio recién asignado en la memoria,
 * que contenga una copia de la cadena dada como parámetro.
 * @str: puntero
 * Return: Devuelve 1
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	size_t size = strlen(str) + 1;

	duplicate = (char *)malloc(size);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
