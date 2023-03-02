#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal
 * 15 if the first strings compare greater
 * -15 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}
	i = 0;

	while (s2[i] != '\0')
	{
		s2_len++;
		i++;
	}
	i = 0;

	while (i < s1_len && i < s2_len)
	{
		if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
		i++;
	}

	return (0);
}
