#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a separator,
 * followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * This function prints the numbers passed as parameters,
 * separated by the string
 * specified by the separator parameter, followed by a new line character.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
