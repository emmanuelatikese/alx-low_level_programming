#include "dog.h"
/**
 *print_dog - Entry point
 *@d: input d is the only argument
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age == 0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("owner: (nil)");
	else
		printf("Owner: %s\n", (*d).owner);
}
