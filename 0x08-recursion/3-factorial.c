#include "main.h"
/**
 * factorial - retuns factorial of a number
 * @n: integer
 * Return: -1 and factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
