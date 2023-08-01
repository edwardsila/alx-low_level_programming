#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head pointer of the list
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = p->next;
		free(p);
	}
}
