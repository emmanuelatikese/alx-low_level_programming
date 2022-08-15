#include "lists.h"
/**
 *print_listint - Entry point
 *@h: input h is the first argument
 * Return: Always 0
 */
size_t print_listint(const listint_t *h)
{
	size_t tmp = 0;

	while (h)
	{
		tmp++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (tmp);
}
