#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int i;
	int k;

	for (i = 0 ; i < 24 ; i++)
	{
		for (k = 0 ; k < 60 ; k++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}

