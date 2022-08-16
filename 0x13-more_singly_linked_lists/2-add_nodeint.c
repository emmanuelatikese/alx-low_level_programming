#include "lists.h"
/**
 *add_nodeint - Entry point
 *@head: input head is the first argument
 *@n: input n is the second argument
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	(*tmp).n = n;
	(*tmp).next = *head;
	*head = tmp;
	return (tmp);
}
