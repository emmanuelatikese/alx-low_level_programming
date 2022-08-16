#include "lists.h"
/**
 *delete_nodeint_at_index- Entry point
 *@head: input head is the first argument
 *@index: input idx is the second argument
 * Return: Always 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *b, *c = *head;

	unsigned int tmp = 0;

	if (c == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (**head).next;
		free(c);
		return (1);
	}
	while (tmp < (index - 1))
	{
		if ((*c).next == NULL)
			return (-1);
		c = (*c).next;
		tmp++;
	}
	b = (*c).next;
	(*c).next = (*b).next;
	free(b);
	return (1);
}
