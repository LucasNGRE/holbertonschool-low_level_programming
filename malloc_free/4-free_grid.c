#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Créer une fonction qui retourne un pointer vers un tableau.
 * @grid: La grille déja créée.
 * @height: Hauteur du tableau.
 * Retourne: Un pointeur vers un tableau 2D.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
