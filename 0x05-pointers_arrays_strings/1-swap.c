#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
