#include "main.h"
/**
 * print_diagonal - prints or draws a diagonal line
 * @n: integer
 */

void print_diagonal(int n)
{
	int o; /* outer loop */
	int i; /* inner loop */

	for (o = 0; o < n; o++)
	{
		for (i = 0; i <= o; i++)
		{
			if (i == o)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}

