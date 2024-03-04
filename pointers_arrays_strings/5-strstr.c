#include "main.h"
#include "stdio.h"
/**
 * _strstr - Entry point
 * @haystack: character to be verified
 * @needle: character to be verified
 * Return:0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *result;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			result = &haystack[i - 1];

			while (haystack[i] == needle[j])
			{
				i++;
				j++;
				if (needle[j] == '\0')
				{
					return (result);
				}
			}
		}
	}
	return (NULL);
}
