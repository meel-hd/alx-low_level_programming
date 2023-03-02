#include "main.h"

/**
 * string_toupper - char to uppercase
 * @s: string
 * Return: result string
 */
char *string_toupper(char *s)
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
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
