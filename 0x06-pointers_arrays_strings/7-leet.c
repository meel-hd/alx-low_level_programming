#include "main.h"

/**
 * leet - deez challenge
 * @s: string
 * Return: pointer to string
 */
char *leet(char *s)
{
	int s_len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		s_len++;
		i++;
	}
	i = 0;

	while (i < s_len)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '7';
		}
		i++;
	}

	return (s);
}
