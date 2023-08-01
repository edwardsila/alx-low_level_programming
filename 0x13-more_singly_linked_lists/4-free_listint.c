#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - frees a linked list
 *@head: pointer to the list
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
