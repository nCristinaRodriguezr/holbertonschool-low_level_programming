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
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
