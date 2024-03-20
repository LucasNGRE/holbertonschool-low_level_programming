#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a separator,
 * followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * This function prints the strings passed as parameters,
 * separated by the string
 * specified by the separator parameter, followed by a new line character.
 * If separator is NULL, it will not be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
