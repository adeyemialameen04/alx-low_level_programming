#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  Free a struct dog from memory
 * @d: Pointer to the struct dog to initialize
 * Description: This function Frees a struct dog from memory.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
