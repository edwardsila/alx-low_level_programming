#include "main.h"
/**
 * _isdigit - check for a digit (0 through 9)
 * @c: integer passed through this function
 * Return: 1 if its a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58) /* 48 represnt ASCII value of 0 */
		return (1);
	else
		return (0);
}
