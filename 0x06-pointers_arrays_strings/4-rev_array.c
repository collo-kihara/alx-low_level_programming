#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: 1st parameter
 * @n: 2nd parameter
 *
 * Returns: always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0 ; i < n / 2 ; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}

