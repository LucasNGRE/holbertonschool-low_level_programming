#include "main.h"
/**
 * swap_int - Entry point
 * @a: character to be verified
 * @b: character to be verified
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
