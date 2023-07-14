#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: bytes
 * @c: character
 * Return: array if succesfull NULL if not
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc((size + 1) * (sizeof(char)));

	if (size == 0)
		return (NULL);
	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;

	array[size] = '\0';

	return (array);
}
