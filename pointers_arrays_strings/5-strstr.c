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
	int j;


	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[ j + 1] == '\0')
			{
				return &haystack[i];
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
