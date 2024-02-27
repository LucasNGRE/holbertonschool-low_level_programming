#include "main.h"
/**
 * _strlen - Entry point
 * @s: character to be verified
 * Return:0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
