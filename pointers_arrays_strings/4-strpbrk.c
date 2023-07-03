#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk-busca en una cadena cualquiera
 * de un conjunto de bytes.
 * @s: apuntador
 * @accept: apuntador
 * Return: variable l
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
