#include "main.h"
/**
 * reverse_array - reverses array
 * @a: pointer to array
 * @n: index
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp, end;

	i = 0;
	end = n - 1;

	while (i < end)
	{
		tmp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end) = tmp;
		i++;
		end--;
	}
}
