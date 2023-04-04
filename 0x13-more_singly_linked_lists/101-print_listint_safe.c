#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_to_list - adds a new node at the beginning of the address list
 * @head: pointer to pointer to address list
 * @address: address to be added
 * Return: pointer to head of list, or NULL if it failed
 **/
address_list *add_to_list(address_list **head, void *address)
{
	address_list *new_node;

	new_node = malloc(sizeof(address_list));
	if (new_node == NULL)
	{
		free_address_list(*head);
		exit(98);
	}

	new_node->address = address;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

/**
 * free_address_list - frees the dynamically allocated address list
 * @head: head of the address list
 **/
void free_address_list(address_list *head)
{
	address_list *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
 * print_listint_safe - prints listint_t list safely
 * @head: pointer to elements of type listint_t
 * Return: the number of nodes in the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	address_list *address_list_head = NULL, *current_address;

	if (head == NULL)
		return (counter);

	while (head)
	{
		current_address = address_list_head;

		while (current_address)
		{
			if (current_address->address == (void *)head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_address_list(address_list_head);
				return (counter);
			}

			current_address = current_address->next;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		current_address = add_to_list(&address_list_head, (void *)head);
		head = head->next;
		counter++;
	}

	free_address_list(address_list_head);

	return (counter);
}

