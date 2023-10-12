#include <stdio.h>
#include "lists.h"

/**
 * print_dlisint - prints data in the list
 * @h: pointer to struct
 * Return: int
 **/

size_t print_dlisint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	printf("-> %d elements\n", count);
	return (count);
}
