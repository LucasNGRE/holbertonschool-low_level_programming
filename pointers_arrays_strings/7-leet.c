#include "main.h"
/**
 * leet - Entry point
 * @str: character to be verified
 * Return:0
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = "aeotlAEOTL";
	char leet[] = "4307143071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = leet[j];
				return (str);
			}
		}
	}
	return (str);
}
