#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n < '9'; n++)
		_putchar(n);

	_putchar('\n');
}
