#include "main.h"
/**
 * print_line - prints a straight line
 * @n: integer
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
			_Putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');

	return (0);
}
