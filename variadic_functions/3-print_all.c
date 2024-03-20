#include "variadic_functions.h"
/**
 * print_all - Print formatted output based on the given
 * format string and arguments
 *
 * @format: A pointer to a constant format string specifying
 * the types of arguments to be printed.
 * The format string can contain characters 'c', 'i', 'f', 's'.
 * Each character corresponds to a specific type of argument:
 * - 'c': char
 * - 'i': integer
 * - 'f': float
 * - 's': char * (if the string is NULL, "(nil)" is printed instead)
 * Any other character in the format string is ignored.
 * The function prints the arguments according to the provided format string.
 * If the format string is empty or NULL, the function does nothing.
 *
 * Return: None
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *s = NULL;
	const char *ptr;
	int arg_print = 0;

	va_start(args, format);
	ptr = format;
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s != NULL) ? s : "(nil)");
				break;
			default:
				break;
		}
		if (*(ptr + 1) != '\0' && (*(ptr + 1) == 'c' || *(ptr + 1) == 'i' ||
					*(ptr + 1) == 'f' || *(ptr + 1) == 's'))
		{
			printf(", ");
			arg_print++;
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}

