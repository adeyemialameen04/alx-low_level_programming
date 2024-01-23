#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  Prints a struct dog
 * @d: Pointer to the struct dog to initialize
 * Description: This function Prints the struct of a dog.
 */
void print_dog(struct dog *d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner:  %s\n", d->owner);
}
