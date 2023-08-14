#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog struct
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to a new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0;
	char *ptr = NULL;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	/* crate name */
	for (i = 1, ptr = name; *ptr; i++)
		ptr++;
	d->name = malloc(i);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	/* create owner */
	for (i = 1, ptr = owner; *ptr; i++)
		ptr++;
	d->owner = malloc(i);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	/* cp the new dog's name */
	for (i = 0; *name != '\0'; i++, name++)
		d->name[i] = *name;
	d->name[i] = '\0';
	d->age = age;
	/* create dog owner */
	for (i = 0; *owner != '\0'; i++, owner++)
		d->owner[i] = *owner;
	d->owner[i] = '\0';

	return (d);
}
