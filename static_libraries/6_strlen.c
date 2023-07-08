#include <stdio.h>
#include "main.h"
/**
 * _strlen- devuelve la longitud de una cadena
 * @s: variable 1
 * Return: Devuelve length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
