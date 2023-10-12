#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node at beginning of doubly linked list
 * @head: head pointer
 * @n: data to add to new node
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev  = new_node;
	*head = new_node;
	return (new_node);
}
