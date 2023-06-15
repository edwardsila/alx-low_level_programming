#include <stdio.h>
#include <unistd.h>

/**
 * main - writes the message to the desired standard error
 * write - 57 is the lenght of the message
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
