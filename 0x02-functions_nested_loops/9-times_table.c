#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int row;
	int column;

	for (row = 0; row <= 9; row++)
		for (column = 0; column <= 9; column++)
		{
			_putchar('0' + row);
			_putchar('0' + column);
			_putchar('\n');
		}
}
