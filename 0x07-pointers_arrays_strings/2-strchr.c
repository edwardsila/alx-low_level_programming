#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: char
 * Return: s and NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0' && *s != c)
		s++;

	return ((*s == c) ? (char *) s : NULL);

}
