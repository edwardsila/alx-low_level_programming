#include "main.h"
/**
 * is_prime_helper - find prime numbers
 * @n: integer
 * @divisor: integer
 * Return: prime
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);/* not rime */
	else if (divisor * divisor > n)
		return (1); /* Prime */
	else if (n % divisor == 0)
		return (0);
	else
		return (is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - finds prime number
 * @n: integer
 * Return: prime
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
