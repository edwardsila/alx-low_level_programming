#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i = 0;
	
	while ((i = length) && (i >= 0))
	{
		length = length - 1;
		--i;
		_putchar(s[i]);
	}
	_putchar('\n');
}
