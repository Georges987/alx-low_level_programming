#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet
 *
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	char letters = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		letters = 'a';
		_putchar('\n');
		i++;
	}
}
