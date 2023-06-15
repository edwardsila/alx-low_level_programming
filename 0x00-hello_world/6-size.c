#include <stdio.h>

/**
 * main - prints the size of various types of c types
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %z byte(s)" sizeof(char));
	printf("Size of an int: %z byte(s)" sizeof(int));
	printf("Size of a long int: %z byte(s)" sizeof(long int));
	printf("Size of a long long int: %z byte(s)" sizeof(long long int));
	printf("Size of a float: %z byte(s)" sizeof(float));

	return (0);
}
