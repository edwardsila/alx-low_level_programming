#include "main.h"
/**
 * _strpbrk - seraches a string for any occurence
 * @s: pointer to string
 * @accept: pointer to string
 * Return: s and NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return (NULL);
}
