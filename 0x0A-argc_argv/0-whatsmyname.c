#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: succes (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
