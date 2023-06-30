#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* this loop find the end of line terminator */
	i = 0;

	while (dest[i] != '\0')
		dest++;
	/* This loop apend contents of src to dest */
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
