#include "main.h"
/**
 * _puts - Entry point
 * @str: character to be verified
 * Return:0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
