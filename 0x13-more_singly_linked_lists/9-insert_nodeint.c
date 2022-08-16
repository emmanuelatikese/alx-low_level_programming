#include "lists.h"
/**
 *insert_nodeint_at_index - Entry point
 *@head: input head is the first argument
 *@idx: input idx is the second argument
 *@n: input n is the third argument
 * Return: Always 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	list_t *b, *c = *head;

	unsigned int tmp;

	b = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	(*b).n = n;
	if (idx == 0)
	{
		(*b).next = c;
		*head = b;
		return (b);
	}
	for (tmp = 0; tmp < (idx - 1); tmp++)
	{
		if (c == NULL || (*c).next == NULL)
			return (NULL);
		c = (*c).next;
	}
	(*b).next = (*c).next;
	(*c).next = b;
	return (b);
}
