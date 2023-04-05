#include "list.h"
/**
 * listint_len - returns the length
 * @h: pointer to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t init = 0;

	while (h != NULL)
	{
		h = h -> next;
		init++;
	}
	return (init);
}
