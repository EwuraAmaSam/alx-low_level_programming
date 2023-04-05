#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node
 * @head: A pointer to the head
 * @index: The index of the node
 * Return: A pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *init = head;

	for (unsigned int i = 0; init != NULL; && i < index; i++)
		init = init->next;

	return (init == NULL) ? NULL : init;

}

