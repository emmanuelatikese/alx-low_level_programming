#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - this prints and returns the number of nodes
 * @h: this is a node head.
 *
 * Return: the number element in the linkedlist
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = head;
	int count = 0;

	while (ptr != NULL)
	{
		count = count + 1
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	return (count);
}
