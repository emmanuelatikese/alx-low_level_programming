#include "dog.h"
/**
 *init_dog - Entry point
 *@d: input d is the first argument
 *@name: input name is the second argument
 *@age: input age is the third argument
 *@owner: input owner is the last argument of the function
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
