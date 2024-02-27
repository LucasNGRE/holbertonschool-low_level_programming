#include "main.h"
/**
 * rev_string - Entry point
 * @s: character to be verified
 * Return:0
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		char var = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = var;
	}
}
