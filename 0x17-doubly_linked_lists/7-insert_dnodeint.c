#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the given
 * index in the doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index to add the new node at, starting from 0.
 * @n: Value of the new node.
 * Return: Address of the new node or NULL if insertion is not possible.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
			unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *newNode, *current = *head;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		if (*head)
			(*head)->prev = newNode;
		*head = newNode;
		return (newNode);
	}
	count = 0;
	while (count < (idx - 1) && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	if (current->next)
		current->next->prev = newNode;
	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
