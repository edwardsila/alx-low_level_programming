#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minutes / 10));
			_putchar('0' + (minutes % 10));
		}
	_putchar('\n');
}
