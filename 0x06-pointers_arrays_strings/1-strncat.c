#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: bytes for the src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	j = 0;

	while ((src[j] != '\0') && (n > 0))
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
