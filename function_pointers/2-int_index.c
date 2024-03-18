#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Description: This function searches for an integer in the
 * specified array using
 * the provided comparison function. It returns the index of the first
 * element for which the comparison function does not return 0. If no
 * element matches or if size is less than or equal to 0, it returns -1.
 *
 * Return: returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
