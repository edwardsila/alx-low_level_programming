#include <stdio.h>

/**
 * main - prints all single digit number of base 10
 * Return: 0
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}

	return (0);
}
