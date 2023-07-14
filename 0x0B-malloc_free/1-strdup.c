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

	while(str[len])
		len++, i++;
	len++;

	str1 = malloc(sizeof(char) * len);

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str1[i] = str[i];
	}
	return (str1);
}
