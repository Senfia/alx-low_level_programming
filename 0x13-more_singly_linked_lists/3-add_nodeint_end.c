#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to listint_t list
* @n: node to copy to end
* Return: address of the new element, or NULL
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current_node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current_node = *head;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new;
	return (new);
}
