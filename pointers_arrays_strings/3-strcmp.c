#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: character to be verified
 * @s2: character to be verified
 * Return:0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;
	result = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			result = s1[i] - '\0' - s2[i] + '\0';
			return (result);
		}
	}
	return (result);
}
