#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - suma ll its parameters
 * @n: integers
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	va_start(arg, n);
	if (n == 0)
		return (0);
	for (i = 0, i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);

	return (sum);
}
