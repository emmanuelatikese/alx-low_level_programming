#include "lists.h"
/**
 *sum_listint - Entry point
 *@head: input head is the first argument
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += (*head).n;
		head = (*head).next;
	}
	return (total);
}
