#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concantenates two strings
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
		length1++, i++;

	while (*(s2 + j))
		length2++, j++;
	length2++;

	if (n >= length2)
		n = length2;

	p = malloc(sizeof(char) * (length1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (j = 0; j < n; i++, j++)
	{
		*(p + i) = *(s2 + j);
	}
	*(p + i) = '\0';
	return (p);
}
