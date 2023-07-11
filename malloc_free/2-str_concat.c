#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *str_concat- concatena dos cadenas en el espacio de memoria asignado
 * @s1: puntero de cadena 1
 * @s2: puntero de cadena 2
 * Return: Result
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
