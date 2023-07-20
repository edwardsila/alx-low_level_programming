#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator: pointer to a char
 * @n: integer
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, numb;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		numb = va_arg(arg, int);
		printf("%d", numb);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}

