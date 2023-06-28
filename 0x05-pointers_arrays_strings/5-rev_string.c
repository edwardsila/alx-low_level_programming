#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to char
 * Return: nothing
 */

void rev_string(char *s)
{
	char *end = s;
	char temp;

	while (*end != '\0')
		end++;
	end--;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;

		s++;
		end--;
	}
}
