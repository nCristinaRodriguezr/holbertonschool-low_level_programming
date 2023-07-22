#include <stdio.h>
/**
 * int_index-esta funsion busca un numero entero
 * @array: un array o cadena de enteros
 * @size: el numero de elementos del array
 * @cmp: funsion que compara numeros
 * Return: Devuelve -1 en caso de que no haya encontrado coincidencias
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
