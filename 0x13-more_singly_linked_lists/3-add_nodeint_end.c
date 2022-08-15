#include "lists.h"
/**
 *add_nodeint_end - Entry point
 *@h: input h is the first argument
 *@n: input n is the second argument
 * Return: Always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *l;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	(*tmp).n = n;
	(*tmp).next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		l = *head;
		while ((*l).next != NULL)
			l = (*l).next;
		(*l).next = tmp;
	}
	return (*head);
}
