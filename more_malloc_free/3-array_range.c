#include "main.h"
#include <stdlib.h>
/**
 * array_range - Allocates memory for an array of integers
 *               containing values from min to max (inclusive).
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: If min > max or if malloc fails, return NULL.
 *         Otherwise, return a pointer to the newly allocated array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		ptr[i] = min + i;
	return (ptr);
}

