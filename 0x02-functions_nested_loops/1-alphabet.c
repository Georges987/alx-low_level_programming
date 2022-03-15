#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: (void)
 *
 */

void print_alphabet(void)
{
	char alx = 'a';

	while (alx <= 'z')
	{
		_putchar(alx);
		alx++;
	}
	_putchar('\n');
}
