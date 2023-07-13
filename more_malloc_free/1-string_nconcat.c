#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *  *string_nconcat- concatena dos cadenas
 * @s1: puntero cadena 1
 * @s2: puntero cadena 2
 * @n: numero entero positivo
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t total_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	total_len = strlen(s1) + n;
	result = (char *)malloc(total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	strncat(result, s2, n);
	return (result);
}
