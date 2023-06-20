#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number
 * Return: (0) when is zero (1) if its greater & (-1) if is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
		return (-1);
}

