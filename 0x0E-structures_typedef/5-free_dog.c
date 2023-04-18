#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - dog is free
 *
 * @d: dog to free which is poppy
 */
void free_dog(dog_t *d)
{
	if (!(d != NULL))
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
