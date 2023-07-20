#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separator of the string
 * @n: integer
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	const char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, const char *);
		if (str == NULL)
			printf("(ni)l");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
