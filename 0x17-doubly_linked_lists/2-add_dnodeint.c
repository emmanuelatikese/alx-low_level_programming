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
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (!tmp)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	dlistint_t *ptr = *head;
	tmp->next = *head;
	ptr->prev = tmp;
	*head = tmp;
	free(ptr);
	return (tmp);
}
