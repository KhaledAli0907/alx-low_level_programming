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

	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
