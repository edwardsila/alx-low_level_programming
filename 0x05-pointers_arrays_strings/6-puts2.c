#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: pointer to a char
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		++length;
		++s;
	}
	return (length);
}

/**
 * puts2 - prints every other char of string starting
 * with the first char
 * @str: pointer to a string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
