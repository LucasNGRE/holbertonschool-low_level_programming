#include "stdio.h"
#include "main.h"
/**
 * _strcpy - Entry point
 * @src: character to be verified
 * @dest: character to be verified
 * Return:0
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
