#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array- crea un array de caracteres
 * e inicializa en un caracter en especifico
 * @size: tamaño de memoria que requieren
 * @c: caracter especifico que el usuario
 * necesita guardar en esa memoria que apartartamos
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned char i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
