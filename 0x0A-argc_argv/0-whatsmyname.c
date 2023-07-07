#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: succes (0)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		printf("%s \n", argv[i]);
		i++;
	}
	return (0);
}
