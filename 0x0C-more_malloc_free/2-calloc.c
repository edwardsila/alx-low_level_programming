#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - alloctaes memory for an array
 * @nmemb: no of elemnts
 * @size: no of bytes
 * Return: pointer to allocted memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;

	return (p);
}
