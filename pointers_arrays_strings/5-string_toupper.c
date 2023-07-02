#include <stdio.h>
#include "main.h"
/**
 * *string_toupper-cambia todas las letras
 * minúsculas de una cadena a mayúsculas
 * @str: variable 1
 * Return: devuelve str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			*ptr = *ptr - 32;
			ptr++;
		}
	}
	return (str);
}
/*
 * utilice el codigo ASCCI para identicar
 * las letras miniculas y MAYUSCULAS
 * el alfabeto en minuscula va desdel 97 a 122
 * se resta 32 por que es la direncia entre mayuscula y minuscula
 * el alfabeto en mayuscula va desde 65 a 90
 */
