#include "lists.h"

/**
 * print_dlistint - this prints and returns the number of nodes
 * @h: this is a node head.
 *
 * Return: the number element in the linkedlist
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count = count + 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
