#include "main.h"
/**
 * reset_to_98 - Entry point
 * @n: character to be verified
 * Return:0
 */
void reset_to_98(int *n)
{
	int *p = &*n;
	*p = 98;
}
