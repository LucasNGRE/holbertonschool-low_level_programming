#include "main.h"
#include <stdlib.h>
/*
 * _calloc - Allocates memory for an array and initializes it with zeros
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Description: The _calloc function allocates memory for an array of nmemb
 * elements, each of size bytes, and returns a pointer to the allocated memory.
 * The memory is set to zero. If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 *
 * Return: Pointer to the allocated memory,
 * or NULL if allocation fails or nmemb/size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
