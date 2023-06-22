#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 exept 2 and 4
 */

void print_most_numbers(void)
{
	int n;
	n = 0;

	if ((n > 0 && n < 10) && (n != 2 || n != 4))
		_putchar('0' + n);
	_putchar('\n');
}
