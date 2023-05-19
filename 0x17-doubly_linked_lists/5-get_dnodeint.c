#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a node at a given index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the node at the given index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}


	if (i != index)
		return (NULL);

	return (head);
}
