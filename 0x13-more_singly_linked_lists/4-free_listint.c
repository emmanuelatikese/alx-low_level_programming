#include "lists.h"
/**
 *free_listint - Entry point
 *@head: input head is the first argument
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = (*head).next;
		free(head);
		head = tmp;
	}
}
