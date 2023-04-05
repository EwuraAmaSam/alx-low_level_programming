#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to node 1
 * @n: parameter
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	num = malloc(sizeof(listint_t));
	if (!num)
		return (NULL);
	num->n = n;
	num->next = *head;
	*head = num;

	return (num);
}

