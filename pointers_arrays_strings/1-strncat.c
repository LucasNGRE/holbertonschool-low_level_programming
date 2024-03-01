#include "main.h"

/**
 * _strncat - Entry point
 * @dest: character to be verified
 * @src: character to be verified
 * @n: character to be verified
 * Return:0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
