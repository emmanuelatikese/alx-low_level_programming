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
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
