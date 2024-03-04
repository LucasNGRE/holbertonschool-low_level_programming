#include "main.h"
#include "stdio.h"
/**
 * _strpbrk - Entry point
 * @s: character to be verified
 * @accept: character to be verified
 * Return:0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
