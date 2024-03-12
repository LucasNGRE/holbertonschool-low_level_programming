#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc.
 * @b: la taille de mémoire à allouer.
 * Return: Un pointeur vers la mémoire allouée.
 * */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL) {
		exit(98);
	}
	return ptr;
}
