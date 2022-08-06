#ifndef _DOG__H__
#define _DOG__H__
#include <stdio.h>
/**
 *dog - Entry point
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
