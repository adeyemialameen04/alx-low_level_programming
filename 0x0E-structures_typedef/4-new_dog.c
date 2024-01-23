#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t struct, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

if (name == NULL || owner == NULL)
return (NULL);
new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);

new_dog->age = age;

new_dog->owner = malloc(strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);

return (new_dog);
}
