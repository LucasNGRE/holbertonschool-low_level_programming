#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Créer une fonction qui retourne un pointer vers un tableau.
 * @width: Largeur de du tableau.
 * @height: Hauteur du tableau.
 * Retourne: Un pointeur vers un tableau 2D.
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
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i ++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
