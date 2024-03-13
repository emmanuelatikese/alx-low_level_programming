#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * strcpy_ - copies strings
 * @des: char
 * @src: char
 * Return: char
 */

char *strcpy_(char *des, char *src)
{
	int c = 0;

	for (c = 0; src[c] != '\0'; c++)
		des[c] = src[c];
	des[c] = '\0';
	return (des);
}

/**
 * strl_ - gets length of strings
 * @str: char *
 * Return: returns int
 */

int strl_(char *str)
{
	int i = 0;

	while (str[i] != '0')
		i++;
	return (i);
}

/**
 * new_dog - create new dogs
 * @name: char
 * @age: float
 * @owner: char
 * Return: return type dog_t or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	int n_count = strl_(name) + 1, o_count = strl_(owner) + 1;

	if (!(new))
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(char) * n_count);
	new->owner = malloc(sizeof(char) * o_count);

	if (!(new->owner) || !(new->name))
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = strcpy_(new->name, name);
	new->owner = strcpy_(new->owner, owner);
	new->age = age;

	return (new);
}
