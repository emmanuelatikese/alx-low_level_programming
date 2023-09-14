#include "lists.h"
/**
 * dlistint_len - this returns the number of element
 *
 * @h: this is the head node
 * Return: this returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr)
	{
		count = count + 1;
		ptr = ptr->next;
	}
	return (count);
}
