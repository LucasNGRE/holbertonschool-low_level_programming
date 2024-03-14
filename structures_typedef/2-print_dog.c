#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description:
 * This function prints the contents of a struct dog pointed to by @d.
 * If any element of the struct is NULL, it prints "(nil)" instead.
 * If @d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
