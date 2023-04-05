#include "lists.h"
/**
 * listint_len - returns element in linked list
 * @h: parameter
 * Return: Returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t init = 0;

	while (h)
	{
		init++;
		h = h->next;
	}
	return (init);
}

