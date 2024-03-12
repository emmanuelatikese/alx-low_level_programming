#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (!(d))
		exit(0);
	printf("Name: %s\n", d->name ? d->name : "(null)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(null)");
}
