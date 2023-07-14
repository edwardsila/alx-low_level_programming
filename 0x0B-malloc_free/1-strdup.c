#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: pointer to string
 * Return: str1 if succesfull 0 if succesfull
 */

char *_strdup(char *str)
{
	int i, len;
	char *str1 = (char *)malloc(sizeof(char));

	if (str == NULL)
		return (NULL);

	for (*str != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		str1[i] = str[i];
	}
	free(str1);
	return (str1);
}
