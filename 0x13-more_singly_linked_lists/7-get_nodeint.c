#include "lists.h"
/**
 *get_nodeint_at_index - Entry point
 *@head: input head is the first argument
 *@index: input index is the second argument
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tmp;

	for (tmp = 0; tmp < index; tmp++)
	{
		if (head == NULL)
			return (NULL);
		head = (*head).next;
	}
	return (head);
}
