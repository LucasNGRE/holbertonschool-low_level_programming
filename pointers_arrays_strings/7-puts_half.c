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
	int temp;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

		if (length_of_the_string % 2 == 0)
		{
			n = length_of_the_string / 2;
			for (i = 0; i < n; i++)
			{
				temp = str[n + i];
				_putchar(temp);
			}
		}
		else
		{
			n = ((length_of_the_string - 1)) / 2;
			for (i = 0; i < n; i++)
			{
				temp = str[n + i + 1];
				_putchar(temp);
			}
		}
		_putchar('\n');
}
