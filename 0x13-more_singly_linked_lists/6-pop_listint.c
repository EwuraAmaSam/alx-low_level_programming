#include "lists.h"

/**
 * pop_listint - Deletes node of the list
 * @head: a pointer to a pointer
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int count = 0;
	listint_t *node;

	if (*head == NULL)
		return count;

	count = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (count);
}

