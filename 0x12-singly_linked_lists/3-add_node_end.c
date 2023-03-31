#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - adds a new node at the end of list_t list
* @head: pointer to list_t list
* @str: string to copy to new node
* Return: address of the new element, or NULL
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;
	int i;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = i;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else if ((*head)->next == NULL)
		(*head)->next = n;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
	}
	return (n);
}
