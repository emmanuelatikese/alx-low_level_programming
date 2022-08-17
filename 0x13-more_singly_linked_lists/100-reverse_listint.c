#include "lists.h"
/**
 *reverse_listint- Entry point
 *@head: input head is the first argument
 * Return: Always 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
		return (NULL);
	b = NULL;
	while ((**head).next != NULL)
	{
		a = (**head).next;
		(**head).next = b;
		b = *head;
		*head = a;
	}
	(**head).next = b;
	return (*head);
}
