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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free_grid2(grid, height);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid[i]);
			return (NULL);
		}
	}
	return (grid);
}
/**
 * free_grid2-frees a 2 dimensional grid previously created
 * @grid: puntero de punteros
 * @height: alto de la matriz
 * Return: Devuelve 1
 */
void free_grid2(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
