#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator-esta funsion ejecuta una funsión
 * esta funsion que llamamos debe ejecutarse sobre cada elemento del un array
 * @array: puntero
 * @size: tamaño
 * @action: puntero que apunta a la direccion de una funsion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
