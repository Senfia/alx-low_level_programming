#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - function that free a list_t list.
* @head: pointer to the list_t list
* Return: nothing
**/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	head = NULL;
}
