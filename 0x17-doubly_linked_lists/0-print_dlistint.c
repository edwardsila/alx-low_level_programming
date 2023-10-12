#include <stdio.h>
#include "lists.h"

/**
 * print_dlisint - prints data in the list
 * @h: pointer to struct
 * Return: int
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
