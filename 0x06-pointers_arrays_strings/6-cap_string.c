#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: result string
 */
char *cap_string(char *s)
{
	int s_len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		s_len++;
		i++;
	}
	i = 1;

	if (s_len && s[0] <= 122 && s[0] >= 97)
	{
		s[0] = s[0] - 32;
	}

	while (i < s_len)
	{
		if (i + 2 != s_len && (s[i] == 32 || s[i] == '\t' ||

				s[i] == 10 || s[i] == 44 ||
				s[i] == 59 || s[i] == 46 ||
				s[i] == 33 || s[i] == 63 ||
				s[i] == 34 || s[i] == 40 ||
				s[i] == 41 || s[i] == 123 ||
				s[i] == 125))
		{
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}

	return (s);
}
