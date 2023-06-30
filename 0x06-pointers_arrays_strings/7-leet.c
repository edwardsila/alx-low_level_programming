#include "main.h"
/**
 * leet - encodes a string ino 1337
 * @str: pointer to string
 * Return: str
 */

char *leet(char *str)
{
	int d[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int z[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	
	int i, j;
	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; d[i] != '\0'; i++)
		{
			if (str[j] == d[i])
				str[j] = z[i];
		}
	}
	return (str);
}
