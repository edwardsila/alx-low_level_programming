#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concantenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: s3
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		len1++;
		i++;
	}

	while (s2[j])
		len2++, j++;
	len2++;

	s3 = malloc(sizeof(char) * (len1 + len2));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		s3[i] = s2[j];

	return (s3);
}
