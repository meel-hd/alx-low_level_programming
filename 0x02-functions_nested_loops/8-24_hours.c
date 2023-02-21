#include "main.h"

/**
 * jack_bauer - print minutes of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hours = 24;
	int minutes = 60;
	int h_count = 0;
	int m_count;
	int colon = 58;
	int newline = 10;

	while (h_count < hours)
	{
		m_count = 0;
		while (m_count < minutes)
		{
			if (h_count < 10)
			{
				_putchar(48);
			}
			_putchar(h_count + '0');
			_putchar(colon);
			if (m_count < 10)
			{
				_putchar(48);
			}
			_putchar(m_count + '0');
			_putchar(newline);

			m_count++;
		}
		h_count++;
	}
}
