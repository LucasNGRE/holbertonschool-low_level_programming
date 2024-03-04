#include "main.h"
/**
 * _memset - Entry point
 * @s: character to be verified
 * @b: character to be verified
 * @n: character to be verified
 * Return:0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
