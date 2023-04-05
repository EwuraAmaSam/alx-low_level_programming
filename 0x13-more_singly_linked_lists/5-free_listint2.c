#include "lists.h"

/**
 * free_listint2 - frees linked lists
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *init;
	if (head == NULL)
		return;

	while (*head)
	{
		init = (*head)->next;
		free(*head);
		*head = init
	}
	*head = NULL;
}
