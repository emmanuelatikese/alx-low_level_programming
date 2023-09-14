#include "lists.h"

/**
 * add_dnodeint - this adds node at the head
 * @head: this is the head node
 * @n: this is a data which is an integer
 *
 * Return: this returns node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (!ptr)
	{
		*head = tmp;
		return (tmp);
	}
	ptr->prev = tmp;
	tmp->next = ptr;
	*head = tmp;
	return (tmp);

}
