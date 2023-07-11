#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid-frees a 2 dimensional grid previously created
 * @grid: puntero de punteros
 * @height: alto de la matriz
 * Return: Devuelve 1
 */
void free_grid(int **grid, int height)
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
