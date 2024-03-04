#include "main.h"
#include "stdio.h"
/**
 * _strchr - Entry point
 * @s: character to be verified
 * @c: character to be verified
 * Return:0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (NULL);
}

