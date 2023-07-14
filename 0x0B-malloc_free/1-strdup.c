#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: pointer to string
 * Return: str1 if succesfull 0 if succesfull
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *str1;

	if (str == NULL)
		return (NULL);

	if (str[len] != '\0')
		len++;

	str1 = malloc(sizeof(char) * (len + 1));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str1[i] = str[i];
	}
	str1[len] = '0';
	return (str1);
}
