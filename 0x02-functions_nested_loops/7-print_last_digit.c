#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: hold the integer to be computed
 * @ld: lastdigit vriab;e
 * Return: n
 */

int print_last_digit(int n)
{
	int ld = n % 10;
	
	if (n < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
