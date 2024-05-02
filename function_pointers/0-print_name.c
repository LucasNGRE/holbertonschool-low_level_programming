#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer taking a char pointer
 * argument and returning void.
 *
 * Description: This function prints the provided name using
 * the specified function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
