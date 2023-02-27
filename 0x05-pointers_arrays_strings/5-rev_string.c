#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	while (i < len / 2)
	{
		int temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp; 
		i++;
	}
}
