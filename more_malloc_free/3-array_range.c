#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *array_range- devuelve un puntero a una matriz bidimensional de enteros
 * @min: valor minimo
 * @max: valor maximo
 * Return: Devuelve el arrray
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
