#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: pointer to head node
 * @index: where to insert node
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr_node = *head;
	listint_t *prev_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr_node->next;
		free(curr_node);
		return (1);
	}

	while (curr_node != NULL && i < index)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}

	if (curr_node == NULL)
		return (-1);

	prev_node->next = curr_node->next;
	free(curr_node);

	return (1);
}

