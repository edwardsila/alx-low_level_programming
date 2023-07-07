#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector (array)
 * Return: 0 succes
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
