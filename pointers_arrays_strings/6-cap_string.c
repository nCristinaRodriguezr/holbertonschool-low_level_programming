#include <stdio.h>
#include "main.h"
/**
 * *cap_string-cambia a mayusculas
 * la primera letra de cada palabra
 * @str: variable 1
 * Return: devuelve str
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122 && cap_next)
		{
			*ptr = *ptr - 32;
		}
		cap_next = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			*ptr == ',' || *ptr == ';' || *ptr == '.' ||
			*ptr == '!' || *ptr == '?' || *ptr == '"' ||
			*ptr == '(' || *ptr == ')' || *ptr == '{' ||
			*ptr == '}');
		ptr++;
	}
	return (str);
}
/*
 * cap_next: cree la varible con el fin de definir todos los signos
 * que debe tener en cuenta, para identificar una nueva palabra
 * y asi pueda cambiar solo la primera letra a mayuscula.
 */
