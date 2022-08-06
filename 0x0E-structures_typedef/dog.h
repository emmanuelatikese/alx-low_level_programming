#ifndef _DOG__H__
#define _DOG__H__
#include <stdio.h>
/**
 *dog - Entry point
 * No return
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - Entry point
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
