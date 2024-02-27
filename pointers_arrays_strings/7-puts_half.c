#include "main.h"
/**
 * puts_half - Entry point
 * @str: character to be verified
 * Return:0
 */
void puts_half(char *str)
{
	int length_of_the_string;
	int n;
	int i;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
		n = length_of_the_string / 2;

		for (i = n; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
