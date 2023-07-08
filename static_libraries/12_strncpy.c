#include <stdio.h>
#include "main.h"
/**
 * *_strncpy-la funcion copia una cadena
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 * Return: Devuelve dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
/*
 * el for inicia con i=0 y luego hay dos condiciones,
 * i debe ser menor a n && el contenido de la posicion [i] sea diferente a nulo
 * luego iguala el contenido de la posicion i de dest con el contenido de
 * la posicion de src.
 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
/*
 * WHILE: con este bucle la idea es que si i es menor que n,
 * debe llenar los espacios faltantes de n con \0
 * teniendo en cuenta que i ya esta modificada por el for.
 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
