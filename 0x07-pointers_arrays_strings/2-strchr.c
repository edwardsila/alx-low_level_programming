#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: char
 * Return: s and NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		i++;
	}

	return (0);
}
