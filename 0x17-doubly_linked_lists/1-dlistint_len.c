#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of ellement in a linked list
 * @h: pointer to structure
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
