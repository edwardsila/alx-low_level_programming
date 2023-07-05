#include "main.h"
/**
 * _pow_recursion - return value of x raised to y
 * @x: integer
 * @y: integr
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1); /* any number raised to pow 0 is 1 */
	else
		return (x * _pow_recursion(x, (y - 1)));
}
