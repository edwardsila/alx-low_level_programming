#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to string
 * @src: pointer to string
 * @n: byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while ((src[j] != '\0') && (n > 0))
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}

	return (dest);
}
