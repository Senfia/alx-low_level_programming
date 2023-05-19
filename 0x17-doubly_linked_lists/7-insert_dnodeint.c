#include "lists.h"

/**
 * insert_dnodeint_at_idx - Inserts a node at a specific index
 * in a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which to insert the node.
 * @n: Value to insert.
 * Return: Address of the new node or NULL if insertion is not possible.
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode, *currentNode;

	if (!head || (idx > 0 && *head == NULL))
		return (NULL);

	i = 0;
	currentNode = *head;

	if (idx > 0)
	{
		for (i = 0; i < (idx - 1) && currentNode != NULL; i++)
		{
		currentNode = currentNode->next;
		}
		if (i < (idx - 1))
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = currentNode;
		if (currentNode)
			currentNode->prev = newNode;
		*head = newNode;
			return (newNode);
	}

	newNode->prev = currentNode;
	if (currentNode->next)
		(currentNode->next)->prev = newNode;
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
