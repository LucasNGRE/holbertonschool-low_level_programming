#include "main.h"
/**
 * _strcat - Entry point
 * @dest: character to be verified
 * @src: character to be verified
 * Return:0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *res = dest;

	while (dest[i])
	{
		res = res + dest[i];
		i++;
	}
	while (src[j])
	{
		res = res + src[j];
		j++;
	}
	res = res + '\0';
	return (res);
}	
