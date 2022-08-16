#include "lists.h"
/**
 *pop_listint - Entry point
 *@head: input head is the first argument
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;

	int r;

	if (*head == NULL)
		return (0);
	t = *head;
	r = (**head).n;
	*head = (**head).next;
	free(t);
	return (r);
}
