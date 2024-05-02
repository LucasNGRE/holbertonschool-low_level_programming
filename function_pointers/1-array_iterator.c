#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Description: This function executes the specified function
 * on each element of the array.
 * It takes a pointer to the array, the size of the array, and a pointer to the
 * function to be executed on each element as parameters.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
