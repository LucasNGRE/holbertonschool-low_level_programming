#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Libère la mémoire allouée pour une structure de type dog_t.
 * @d: Pointeur vers la structure de type dog_t à libérer.
 *
 * Cette fonction libère la mémoire allouée dynamiquement pour une structure
 * de type dog_t, permettant ainsi de "libérer" un chien en mémoire.
 */
void free_dog(dog_t *d)
{
	free(d);
}
