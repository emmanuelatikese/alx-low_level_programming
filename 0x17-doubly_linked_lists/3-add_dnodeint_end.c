#include "lists.h"
/**
 * add_dnodeint_end - this function adds node to the end
 *
 * @head: this is the start of the node
 * @n: this is a data in a form of integer
 *
 * Return: this returns the element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (!ptr)
	{
		ptr = tmp;
		return (tmp);
	}

	while (!ptr)
	{
		ptr = ptr->next;
	}

	ptr->next = tmp;
	tmp->prev = ptr;
	return (tmp);
}
