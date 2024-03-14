#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a string containing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a string containing the owner's name
 *
 * Description: This function initializes a variable of type struct dog
 * by setting its name, age, and owner to the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
