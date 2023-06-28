#include "main.h"
/**
 * _strlen - calculates length of string
 * @s: pointer to char
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
 * puts_half - prints half of a string
 * @str: pointer to a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index, i;

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length - 1) / 2;


	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}
