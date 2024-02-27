#include "main.h"
/**
 * puts2 - Entry point
 * @str: character to be verified
 * Return:0
 */
void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar ('\n');
}
