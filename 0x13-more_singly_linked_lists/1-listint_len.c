#include "lists.h"
/**
 *listint_len - Entry point
 *@h: input h is the first argument
 * Return: Always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t tmp = 0;

	while (h)
	{
		tmp++;
		h = (*h).next;
	}
	return (nodes);
}
