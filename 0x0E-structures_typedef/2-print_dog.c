#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 *
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAGE: %.6.6.6.6.6.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
