#include "main.h"
/**
 * sqrt_helper - finds the square root of a number
 * @n: integer
 * @guess: integer
 * Return: sqrt
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (sqrt_helper(n, (guess + 1)));
}
/**
 * _sqrt_recursion - retuns square root
 * @n: integer
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
