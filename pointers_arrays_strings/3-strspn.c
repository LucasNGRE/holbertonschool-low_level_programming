#include "main.h"
#include "stdio.h"
/**
 * _strspn - Entry point
 * @s: character to be verified
 * @accept: character to be verified
 * Return:0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int somme = 0;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
		{
			k = 1;
		}
		}
		if (k >= 1)
		{
			somme += 1;
			k = 0;
			continue;
		}
		if (k == 0 && somme > 0)
		{
			break;
		}
	}
	return (somme);
}
