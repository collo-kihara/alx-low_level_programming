#include <stdio.h>

/**
 * main - this is the main function
 * 
 * Return: always 0
 */

int main(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar('j');
	putchar('\n');
	return (0);
}

