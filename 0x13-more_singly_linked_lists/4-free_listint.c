#include "lists.h"

/**
 * free_listint - frees a list
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *num;

	while (head)
	{
		num = head->next;
		free(head);
		head = num;
	}
}
