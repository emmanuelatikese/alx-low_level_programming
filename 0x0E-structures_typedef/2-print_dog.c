#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dogs
 * @d: struct type
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name = (d->name) ? d->name : "(null)";
		d->owner = (d->owner) ? d->owner : "(null)";
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", d->owner);
	}
}
