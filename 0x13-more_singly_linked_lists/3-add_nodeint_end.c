#include "lists.h"

/**
 * add_nodeint_end - adds a node
 * @head: pointer to head
 * @n: parameter
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num;
	listint_t *init = *head;

	num = malloc(sizeof(listint_t));
	if (h)
		return (NULL);

	num->n = n;
	num->next = NULL;
	if (*head == NULL)
	{
		*head = num;
		return (num);
	}

	while (init->next)
		init = init->next;
	init->next = num;

	return (num);
}

