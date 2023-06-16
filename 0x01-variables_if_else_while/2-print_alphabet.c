#include <stdio.h>

/**
 * main - prints alphabets in lowercase followed by a new line
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
