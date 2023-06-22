#include "main.h"
/**
 * _isdigit - check for a digit (0 through 9)
 * @c: integer passed through this function
 * Return: 1 if its a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
