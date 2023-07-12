#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * **alloc_grid- devuelve un puntero a una matriz bidimensional de enteros
 * @width: ancho de la matriz
 * @height: alto de la matriz
 * Return: Devuelve grid nuestra nueva variable
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
/*
 * la variable grid será un puntero de un arreglo de punteros
 * se usa malloc para asignar memoria a este array de punteros
 * sizeof se usa para saber el espacio en memoria que necesita
 * con if se verifica si se asignó la memoria exitosamente si no arroja NULL
 */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
/*
 * se usa un bucle para asignar memoria en cada fila de la matriz
 * se usa calloc para inicializar en 0,
 * mallooc y calloc asignan espacio en la memoria
 * la difernecia es que malloc asigna espacio y puede llegar a mostrar basura
 * calloc asigna el espacio y muestra cero en cada asignacion del elemento
 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
