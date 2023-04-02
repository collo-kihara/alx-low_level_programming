#include "main.h"

/**
 * _print_last_digit - prints the last digit of a number
 * 
 * @i: fucntion parameter
 *
 * Return: always j
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}

