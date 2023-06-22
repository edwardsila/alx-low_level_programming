#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
		_putchar('0' + n);
	_putchar('\n');
}
