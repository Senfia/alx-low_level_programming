#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - adds a new node at the end of list_t list
* @head: pointer to pointer to list_t list
* @str: string to copy to new node
* Return: address of the new element, or NULL
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else if ((*head)->next == NULL)
		(*head)->next = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
