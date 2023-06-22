#include "main.h"
/**
 * _isupper - check for upercase character
 * @c: holds the parameter to be checked
 * Return: (1) when upercase (0) otherwise
 */

int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
		return (1);
	else
		return (0);
}
