#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to insert in the new node.
 * Return: Address of the new node or NULL if fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
	for (tmp = *head; tmp->next; tmp = tmp->next)
	{

	}

	new_node->prev = tmp;
	tmp->next = new_node;
	}
	else
	{
	new_node->prev = NULL;
	*head = new_node;
	}

	return (new_node);
}
