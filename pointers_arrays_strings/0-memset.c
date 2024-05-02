#include "main.h"
/**
 * _memset - Entry point
 * @s: character to be verified
 * @b: character to be verified
 * @n: character to be verified
 * Return:0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

