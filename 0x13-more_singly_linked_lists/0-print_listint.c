#include "list.h"
/**
 * print_listint - prints elements in the list
 * @h: pointer to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t init = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		init++;
	}
	return (init);
}
