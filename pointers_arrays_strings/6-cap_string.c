#include "main.h"
/**
 * separateur - Entry point
 * @c: character to be verified
 * Return:0
 */
int separateur(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';'
			|| c == '.' || c == '!' || c == '?' || c == '"' || c == '('
			|| c == ')' || c == '{' || c == '}');
}
/**
 * cap_string - Entry point
 * @str: character to be modified
 * Return:0
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || separateur(str[i - 1])) && str[i] >= 'a'
				&& str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
