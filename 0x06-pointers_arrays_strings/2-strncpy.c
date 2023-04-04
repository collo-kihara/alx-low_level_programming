#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of strings
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

