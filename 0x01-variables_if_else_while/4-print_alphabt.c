#include <stdio.h>

/**
 * main - prints alphabets in lowercase followed by a new line exept q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{

			putchar(c);

		}
		c++;
	}

	putchar('\n');

	return (0);
}
