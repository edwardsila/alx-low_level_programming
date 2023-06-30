#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	/* this loop find the end of line terminator */
	while (*dest)
		dest++;
	/* This loop apend contents of src to dest */
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (0);
}
