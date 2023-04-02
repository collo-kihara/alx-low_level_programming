#include "main.h"

/**
 * function _isalpha - checks for alphabet character
 *
 * @c: parameter to be checked
 *
 * Return: 1 if alphabet
 * and 0 else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

