#include "lists.h"
/**
 *free_listint2 - Entry point
 *@head: input head is the first argument
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head)
	{
		t = (**head).next;
		free(*head);
		*head = t;
	}
	head = NULL;
}
